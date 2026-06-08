class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s=bitset<32>(n).to_string();
        int flag=0;
        for (int i=0; i<s.size()-1;i++){
            if (s[i]=='1' && s[i+1]=='1'){
                flag++;
            }
        }
        if (flag==1) return true;
        return false;
    }
};