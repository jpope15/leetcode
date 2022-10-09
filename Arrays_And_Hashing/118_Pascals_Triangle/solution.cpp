class Solution {
public:
    // my initial solution, not very optimized
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> pt;
        if (numRows == 1) {
            return std::vector<std::vector<int>>{std::vector<int>{1}};
        } else if (numRows == 2) {
            return std::vector<std::vector<int>>{std::vector<int>{1}, std::vector<int>{1,1}};
        } else { // numRows >= 2
            numRows -= 2;
            pt.push_back(std::vector<int>{1});
            pt.push_back(std::vector<int>{1,1});
            
            while (numRows-- > 0) {
                auto row = pt.size()-1;
                auto s_it = pt[row].begin();
                auto e_it = pt[row].end();
                
                pt.push_back(std::vector<int>{1});
                while (s_it+1 < e_it) {
                    pt.back().push_back(*s_it + *(s_it+1));
                    s_it++;
                }
                pt.back().push_back(1);
            }
        }
        return pt;
    }

    // Better solution
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> pt(numRows);
        for (auto i = 0; i < numRows; i++) {
            pt[i].resize(i+1, 1);
            for (auto j = 1; j < i; j++) {
                pt[i][j] = pt[i-1][j-1] + pt[i-1][j];
            }
        }
        return pt;
    }
};