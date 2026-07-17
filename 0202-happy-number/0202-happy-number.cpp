class Solution {
public:
    bool isHappy(int n) {
        set<int> table;
        string s=to_string(n);
        while (n!=1){
            int sum=0;
            int i=0;
            int j=s.size()-1;
            while(i<j){
                int idigit=s[i]-'0';
                int jdigit=s[j]-'0';
                sum+=idigit*idigit + jdigit*jdigit;
                i++; j--;
            }
            if (i == j) {
                int digit = s[i] - '0';
                sum += digit * digit;
            }
            if (table.contains(sum)) {return false;}
            table.insert(sum);
            s=to_string(sum);
            n=sum;
        }
        return true;
    }
};