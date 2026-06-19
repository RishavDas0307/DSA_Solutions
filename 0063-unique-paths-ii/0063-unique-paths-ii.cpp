class Solution {
public:
    int solve(vector<vector<int>>& grid, int x, int y, vector<vector<int>>&dp){
        if (x < 0 || y < 0) {return 0;}
        if (grid[x][y]==1) {return 0;}
        if (x == 0 && y == 0) {return 1;}
        if (dp[x][y]!=-1) {return dp[x][y];}
        int left=solve(grid, x, y-1,dp);
        int right=solve(grid, x-1, y,dp);
        return dp[x][y]=left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(obstacleGrid, m-1,n-1, dp);
    }
};