//  https://leetcode.com/problems/minimum-score-triangulation-of-polygon/description/


#define ll long long int
class Solution {
public:
    vector<vector<ll>>dp;
    vector<int>vtb;

    int f(int i , int j) {
        if(i == j || i+1 == j) return 0;

        if(dp[i][j] != 2147483647) return dp[i][j];
        int ans = INT_MAX;

        for(int k = i+1 ; k<j ; k++) {
            ans =  min( ans, f(i, k)+f(k, j) + vtb[i]*vtb[j]*vtb[k] );
        }
        return dp[i][j] = ans;
    }

    int minScoreTriangulation(vector<int>& v) {
        vtb = v;
        int n = v.size();
        dp.clear();
        dp.resize(55, vector<ll>(55, 2147483647));
        return f(0, n-1);
    }
};