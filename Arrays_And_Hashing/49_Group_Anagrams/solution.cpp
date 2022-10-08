class Solution {
public:
    // my solution
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        std::vector<std::vector<std::string>> res;
        std::unordered_map<std::string, std::vector<std::string>> mp;
        
        for (const auto& s : strs) {
            auto cpy = s;
            sort(cpy.begin(), cpy.end());
            auto it = mp.find(cpy);
            if (it != mp.end()) {
                it->second.push_back(s);
            } else {
                mp[cpy].push_back(s);
            }
        }
        for (const auto&[s,v] : mp) {
            res.push_back(std::move(v));
        }
        return res;
    }
};