// https://leetcode.com/problems/coin-change/description/

class Solution {
public:

    vector<int>coins;
    vector<int> dp = vector<int>(10001, -2); 
    
    int f(int n){
        if(n==0) return dp[n]=0;
        if(dp[n]!=-2) return dp[n];
        
        int result = INT_MAX;
        for(int i=0;i<coins.size();i++){
            if(n-coins[i]<0) continue;
            int x = f(n-coins[i]);
            if(x!=-1) result = min(result, x);
            if(result ==-1) continue;
        }
        //if(result== -1) return dp[n]=-1;
        if(result ==INT_MAX) return dp[n]= -1;
        return dp[n]= 1+ result;
        
    }


    int coinChange(vector<int>& c, int amount) {
       
        coins = c;
        
        int ans = f(amount);
        if(ans ==INT_MAX ) return -1;
        return ans;
    }
};