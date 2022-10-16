class Solution {
public:
    void reverseString(vector<char>& s) {
        for (auto i = 0; i < s.size()/2; i++) {
            std::swap(s[i], s[s.size()-1-i]);
        }
    }
};