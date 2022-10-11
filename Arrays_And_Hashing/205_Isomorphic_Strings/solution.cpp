class Solution {
public:
    // My solution
    bool isIsomorphic(string s, string t) {
        std::array<char, 128> map_s = { 0 };
        std::array<char, 128> map_t = { 0 };
        
        auto len = s.size();
        for (auto i = size_t(0); i < len; ++i)
        {
            if (map_s[s[i]] && map_s[s[i]] != t[i]) {
                return false;
            } 
            
            if (map_t[t[i]] && map_t[t[i]] != s[i]) {
                return false;
            }
            
            map_s[s[i]] = t[i];
            map_t[t[i]] = s[i];
        }
        return true;    
    }
};