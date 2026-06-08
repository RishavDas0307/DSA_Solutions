class Solution {
public:
    bool isValid(string s) {
        vector<char> p;
        int top=-1;
        for (char c : s){
            if (c=='(' || c=='{' || c=='['){
                p.push_back(c);
                top++;
            }
            else if (p.empty()) return false;
            else if (c==')'){
                if (p[top]=='('){
                    p.pop_back();
                    top--;
                }
                else {return false;}
            }
            else if (c=='}'){
                if (p[top]=='{'){
                    p.pop_back();
                    top--;
                }
                else {return false;}
            }
            else if (c==']'){
                if (p[top]=='['){
                    p.pop_back();
                    top--;
                }
                else {return false;}
            }
        }
        if (p.empty()) return true;
        return false;
    }
};