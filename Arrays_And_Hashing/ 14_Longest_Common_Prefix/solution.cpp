class Solution {
public:
    // My solution
    string longestCommonPrefix(vector<string>& strs) {
        string longest;
        if (strs.size() == 1)
            return strs[0];
        
        for (int i = 0; i < strs[0].length(); ++i)
        {
            char curr = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j].length() <= i || strs[j][i] != curr) {
                    return longest;
                }
            }
            longest += curr;
        }
        return longest;
    }


};