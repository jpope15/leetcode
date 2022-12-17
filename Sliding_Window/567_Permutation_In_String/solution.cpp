class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int s1_count[26] = {0};
        int s2_count[26] = {0};
        
        int start = 0;

        for (auto c : s1)
            s1_count[c - 'a']++;
        
        
        for (int i = 0; i < s2.length(); i++)
        {
            s2_count[s2[i]-'a']++;
            
            if ((i-start+1) > s1.length())
            {
                s2_count[s2[start++]-'a']--;
            }
            
            bool res = true;
            for (int j = 0; j < 26; j++)
            {
                res &= (s2_count[j] == s1_count[j]);
            }
            
            if (res)
                return true;
        }
        return false;
    }
};