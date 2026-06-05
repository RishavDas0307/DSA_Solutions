class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){return false;}
        int temp=x;
        long ans=0;
        while(x!=0){
            ans=ans*10+x%10;
            x/=10;
        }
        return (ans==temp && ans<INT_MAX && ans>INT_MIN)?true:false;
    }
};