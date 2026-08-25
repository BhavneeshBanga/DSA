// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/


int dp[1005][101][3];

class Solution {
public:
    int f(vector<int>&p, int i, int k, bool on) {
        if(i == p.size()) return 0;

        if(dp[i][k][on] != -1) return dp[i][k][on];

        int ans = INT_MIN;

        // avoid
        ans = f(p, i+1, k , on);

        //not avoid
        if(on) {
            ans = max(ans, p[i] + f(p, i+1, k-1, false));
        } else{
            if(k>0) {
                ans = max(ans, f(p, i + 1, k , true) - p[i]);
            }
        }
        
        return dp[i][k][on] = ans;
    }


    int maxProfit(int k, vector<int>& p) {
        memset(dp, -1, sizeof dp);
        return f(p, 0, k , false);
    }
};