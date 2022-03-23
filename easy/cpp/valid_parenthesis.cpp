// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> q;
        for (const auto& c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                q.push(c);
            }
            else 
            {
                if (!(q.top() == '{' && c == '}')
                    && !(q.top() == '[' && c == ']')
                    && !(q.top() == '(' && c == ')'))
                {
                    return false;
                }
                q.pop();
            }
        }
        return q.empty();
    }
};