class Solution {
public:
    // My solution, O(n) time, O(1) space
    bool isSubsequence(string s, string t) {
        auto s_begin = s.begin();
        auto s_end = s.end();
        auto t_begin = t.begin();
        auto t_end = t.end();
        
        while (s_begin < s_end && t_begin < t_end) {
            if (*t_begin == *s_begin) {
                s_begin++;
            }
            t_begin++;
        }
        return s_begin == s_end;
    }
};