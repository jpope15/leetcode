class Solution {
public:
    // this was my solution, passed 467 of the 469 test cases, couldn't figure out the last two.
    bool validPalindrome(string s) {
        auto l = 0;
        auto r = s.length() -1;
        auto count = 0;
        
        while (l < r) {
            if (s[l] != s[r]) {
                if ((r-1 >= 0 && s[r-1] == s[l]) || (r+1 < s.length() && s[r+1] == s[l])) {
                    count++;
                    r--;
                } else if ((l+1 < s.length() && s[l+1] == s[r]) || (l-1 >= 0 && s[l-1] == s[r])) {
                    count++;
                    l++;
                } else {
                    return false;
                }                
            } else {
                l++;
                r--;
            }
        }
        return count <= 1;
    }
};

// This a really cool solution that can be generalized for k deletions, not just 1
class Solution {
public:
    bool validPalindrome(string s) {
        auto l = 0;
        auto r = s.length() -1;
        return validPalindrome(s, l, r, 1);
    }
    
    bool validPalindrome(string& s, int l, int r, int n) {
        if (n < 0) {
            return false;
        }
        
        while (l < r) {
            if (s[l] != s[r]) {
                return validPalindrome(s, l+1, r, n-1) || validPalindrome(s, l, r-1, n-1);
            }
            l++;
            r--;
        }
        return true;
    }
};
