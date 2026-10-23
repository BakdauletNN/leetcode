class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int r = g.size();
        int c = g[0].size();
        vector<vector<int>> dp(r, vector<int>(c, 0));
        dp[0][0] = g[0][0];
        for(int i = 1; i < r; i++){
            dp[i][0] = dp[i-1][0] + g[i][0];
        }
        for(int j = 1; j < c; j++){
            dp[0][j] = dp[0][j-1] + g[0][j];
        }
        for(int i = 1; i < r; i++){
            for(int j = 1; j < c; j++){
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + g[i][j];
            }
        }
        return dp[r-1][c-1];
    }
};
