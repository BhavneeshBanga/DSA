// https://leetcode.com/problems/unique-paths-ii/submissions/2108679281/


class Solution {
public:

    vector<vector<int>>dp;
    
    int f(int sr, int sc, int er, int ec, vector<vector<int>>& o) {

        if(sr == er && sc == ec) return 1;
        if(sr > er || sc > ec) return 0;
        if(o[sr][sc] == 1) return 0;
        if(dp[sr][sc] != -1) return dp[sr][sc];

        return dp[sr][sc] =  f(sr, sc+1 , er, ec, o) + f(sr+1, sc , er, ec, o);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m = o.size() ;
        int n = o[0].size() ;
        if(o[m-1][n-1]==1) return 0;
        dp.clear();
        dp.resize(m+1, vector<int>(n+1, -1));
        // for(int i = m - 1; i>=0 ; i--) {
        //     for(int j = n-1 ; j>= 0 ; j--) {
        //         if(i == m-1 || j == n-1) {
        //             o[i][j] = 1;
        //         }
        //         else if(o[i][j] != 1) {
        //             o[i][j] = o[i+1][j] + o[i][j+1];
        //         } 
        //         // else{
        //          if(o[i][j] == 1){
        //             o[i][j] = 0;
        //         }
        //     }
        // }
        return f(0, 0, m-1, n-1, o);
       
    }
};