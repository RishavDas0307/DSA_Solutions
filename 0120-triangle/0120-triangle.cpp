class Solution {
public:
    int solve(vector<vector<int>>& triangle, int i, int j, vector<vector<int>>& dp) {
        if (j < 0 || j > i) return 1e9;
        if (i == 0 && j == 0) return triangle[0][0];
        if (dp[i][j] != -1) return dp[i][j];
        int left = solve(triangle, i - 1, j - 1, dp);
        int right = solve(triangle, i - 1, j, dp);
        return dp[i][j] = triangle[i][j] + min(left, right);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int ans = 1e9;
        for (int j = 0; j < n; j++)
            ans = min(ans, solve(triangle, n - 1, j, dp));
        return ans;
    }
};