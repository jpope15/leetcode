class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> s;

        for (const auto& str : tokens) {
            if (isOp(str)) {
                evalStack(s, str);
            } else {
                s.push(std::stoi(str));
            }
        }
        return s.top();
    }

    bool isOp(const std::string& s) {
        return s == "+" ||
               s == "-" || 
               s == "*" || 
               s == "/";
    }

    void evalStack(std::stack<int>& s, const std::string& op) {
        auto n1 = s.top(); s.pop();
        auto n2 = s.top(); s.pop();

        s.push(evalOp(n1, n2, op[0]));
    }

    int evalOp(int n1, int n2, char op) {
        switch(op){
        case '+':
            return n1 + n2;
        case '-':
            return n2 - n1;
        case '*':
            return n1 * n2;
        case '/':
            return n2 / n1;
        default:
            return -INT_MAX;
        }
    }
};
