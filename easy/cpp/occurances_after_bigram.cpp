// https://leetcode.com/problems/occurrences-after-bigram/

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> tokenized;
        vector<string> res;
        
        stringstream ss(text);
        string temp;
        
        while (getline(ss, temp, ' '))
        {
            tokenized.push_back(temp);
        }
        
        for (int i = 0; i < tokenized.size()-2; i++)
        {
            if (tokenized[i] == first && tokenized[i+1] == second)
            {
                res.push_back(tokenized[i+2]);
            }
        }
        return res;
    }
};