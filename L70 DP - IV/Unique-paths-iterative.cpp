// https://leetcode.com/problems/unique-paths-ii/submissions/2108679281/

class Solution {
public:
    vector<vector<int>>dp;
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m = o.size() ;
        int n = o[0].size() ;
        if (o[0][0] == 1 || o[m-1][n-1] == 1) return 0;

        dp.clear();
        dp.resize(m+1, vector<int>(n+1, 0));
        for(int i = m-2; i>=0 ; i--){
            if(o[i][n-1] == 1){
                dp[i][n-1] = 0;
            } else{
                dp[i][n-1] =  dp[i+1][n-1];
            }
        }
        for(int j = n-2 ; j>=0 ; j--) {
            if(o[m-1][j] == 1){
                dp[m-1][j] = 0;
            } else{
                dp[m-1][j] =  dp[m-1][j+1];
            }
        } 
        for(int i = m - 2; i>=0 ; i--) {
            for(int j = n-1 ; j>= 0 ; j--) {
                if(o[i][j] == 1) {
                    dp[i][j] = 0;
                } else{
                    dp[i][j] = dp[i+1][j] + dp[i][j+1];
                }
            }
        }
        return dp[0][0];
    }
};