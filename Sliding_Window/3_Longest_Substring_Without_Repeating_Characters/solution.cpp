class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        std::unordered_map<char, int> map;
        int start_i = 0, max_length = 0;
        for (int i = 0; i < s.length(); i++)
        {
            map[s[i]]++;
            while (map[s[i]] > 1)
            {
                map[s[start_i]]--;
                start_i++;
            }
            max_length = std::max(max_length, i-start_i+1);
        }
        return max_length;
    }
};