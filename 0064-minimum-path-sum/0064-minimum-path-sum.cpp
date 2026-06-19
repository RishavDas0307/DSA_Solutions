class Solution {
public:
    int solve(vector<vector<int>>& grid, int x, int y, vector<vector<int>>& dp){
        if (x<0 || y<0) {return 1e9;}
        if (x==0 && y==0) {return grid[0][0];}
        if (dp[x][y]!=-1) {return dp[x][y];}
        int left=grid[x][y]+solve(grid, x, y-1, dp);
        int right=grid[x][y]+solve(grid, x-1, y, dp);
        return dp[x][y]=min(left,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(grid, m-1, n-1, dp);
    }
};