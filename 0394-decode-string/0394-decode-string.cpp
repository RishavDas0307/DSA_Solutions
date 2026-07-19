class Solution {
public:
    string decodeString(string s) {
        vector<char> charstack;

        for (char ch : s) {
            if (ch != ']') {
                charstack.push_back(ch);
            } 
            else {
                string ans;
                while (!charstack.empty() && charstack.back() != '[') {
                    ans = charstack.back() + ans;
                    charstack.pop_back();
                }
                charstack.pop_back();
                string num;
                while (!charstack.empty() && isdigit(charstack.back())) {
                    num = charstack.back() + num;
                    charstack.pop_back();
                }
                int n = stoi(num);
                string temp;
                for (int i = 0; i < n; i++) {
                    temp += ans;
                }
                for (char c : temp) {
                    charstack.push_back(c);
                }
            }
        }
        return string(charstack.begin(), charstack.end());
    }
};