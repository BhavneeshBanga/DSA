// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2114804587/

// Iterative
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int thr = p[0];
        int profit = INT_MIN;

        for(auto ele : p) {
            if(ele < thr){
                thr = ele;
            }
            profit = max(profit, ele - thr);
        }
        return profit;
    }
};



// Recursive
class Solution {
public:
    int dp[100005][2];
    int f(vector<int>&p, int i, bool on) {
        if(i == p.size() ) {
           return 0;
        }
        if(dp[i][on] != -1) return dp[i][on];

        //avoid 
        int ans = f(p, i+1, on);

        //not avoid
        if(!on) {
            ans = max(ans, -p[i] + f(p, i+1, true));
        } 
        // if(!on) {
        else{
            ans = max(ans,  p[i]);
        }
        return dp[i][on] = ans;
    }
    int maxProfit(vector<int>& p) {
        memset(dp, -1, sizeof dp);
        return f(p, 0, false); 
    }
};
