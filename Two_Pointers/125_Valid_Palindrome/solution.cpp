class Solution {
public:
    // simple solution
    bool isPalindrome(string s)
    {
        string new_s;
        
        for (char c : s)
        {
            if (isalnum(c))
                new_s += tolower(c);
        }
        
        int first = 0;
        int last = new_s.size()-1;
        
        while (first < last)
        {
            if (new_s[first++] != new_s[last--])
                return false;
        }
        
        return true;
    }
};