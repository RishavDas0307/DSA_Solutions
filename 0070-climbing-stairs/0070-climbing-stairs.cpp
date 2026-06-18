class Solution {
public:
    int solve(vector<int>&dp, int ind){
        if (ind==0 || ind==1) {return 1;}
        if (dp[ind]!=-1) {return dp[ind];}
        dp[ind-1]=solve(dp, ind-1);
        dp[ind-2]=solve(dp,ind-2);
        return dp[ind]=dp[ind-1]+dp[ind-2];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(dp, n);
    }
};