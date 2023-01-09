class Solution {
public:
    int characterReplacement(string s, int k) 
    {
       
        int max_length = 0, start = 0, max_freq = 0;
        
        std::unordered_map<char, int> freq; 
        
        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i]]++;
            max_freq = std::max(max_freq, freq[s[i]]);
            
            if ((i-start+1)-max_freq > k)
            {
                freq[s[start]]--;
                start++;
            }

            max_length = std::max(max_length, i-start+1);

        }
        
        return max_length;
    }
};