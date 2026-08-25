// https://leetcode.com/problems/min-cost-climbing-stairs/

//Recursive DP
class Solution {
public:
    int helper(int i, vector<int>&cost, vector<int>&dp) {
        if(i == 0 || i == 1) {
            return cost[i];
        }
        if(dp[i] != -1 )  return dp[i];
        return dp[i] =  cost[i]+min(helper(i-1, cost, dp), helper(i-2, cost, dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() ;
        vector<int> dp(cost.size() + 1, -1);
        return min(helper(n-1,cost, dp), helper(n-2,cost, dp));
    }
};


// Iterative DP
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() ;
        if(n == 1) {
            return cost[0];
        } else if(n == 2) {
            return min(cost[0], cost[1]);
        } else{
            for(int i = 2 ; i<n ; i++) {
                cost[i] += min(cost[i-1], cost[i-2]);
            }
            return min(cost[n-1], cost[n-2]);
        }
    }
};