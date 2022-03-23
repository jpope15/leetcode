// https://leetcode.com/problems/counting-words-with-a-given-prefix/

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int c = 0;
        for (auto s : words)
        {
            c += (s.substr(0, n) == pref);
        }
        return c;
    }
};