// https://leetcode.com/problems/knight-probability-in-chessboard/description/


double dp[30][30][105];
int n;
int dx[] = {1, 2, -1, -2, 1, 2, -1, -2};
int dy[] = {2, 1, 2, 1, -2, -1, -2, -1};

class Solution {
public:
    double f(int i, int j, int k) {
        if(i < 0 or j < 0 or i>= n or j>=n) return 0;
        if( k == 0) return 1;

        if(dp[i][j][k] > -0.9) return dp[i][j][k] ;



        double ans = 0.0;

        for(int m = 0 ; m<8 ; m++) {
            ans += f(i + dx[m], j + dy[m], k-1)*(0.125);
        }
        //    ans += f(i+1, j+2, k-1)*(0.125);
        //    ans +=  f(i+2, j+1, k-1)*(0.125);
        //    ans +=  f(i-1, j+2, k-1)*(0.125);
        //    ans +=  f(i-2, j+1, k-1)*(0.125);
        //    ans +=  f(i+1, j-2, k-1)*(0.125);
        //    ans +=  f(i+2, j-1, k-1)*(0.125);
        //    ans += f(i-1, j-2, k-1)*(0.125);
        //    ans +=  f(i-2, j-1, k-1)*(0.125) ;

        return dp[i][j][k] = ans;
    }
    double knightProbability(int num, int k, int row, int column) {
        n = num;
        memset(dp, -1, sizeof dp);
        return f(row, column, k);
    }
};