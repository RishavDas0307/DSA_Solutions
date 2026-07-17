class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack(tokens.size());
        int top = -1;
        for (int i = 0; i < tokens.size(); i++) {
            int op1, op2;
            if (tokens[i] == "+") {
                op1 = stack[top--];
                op2 = stack[top--];
                stack[++top] = op2 + op1;
            }
            else if (tokens[i] == "-") {
                op1 = stack[top--];
                op2 = stack[top--];
                stack[++top] = op2 - op1;
            }
            else if (tokens[i] == "*") {
                op1 = stack[top--];
                op2 = stack[top--];
                stack[++top] = op2 * op1;
            }
            else if (tokens[i] == "/") {
                op1 = stack[top--];
                op2 = stack[top--];
                stack[++top] = op2 / op1;
            }
            else {
                stack[++top] = stoi(tokens[i]);
            }
        }
        return stack[top];
    }
};