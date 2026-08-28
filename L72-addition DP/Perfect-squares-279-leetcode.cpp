// https://leetcode.com/problems/perfect-squares/description/


class Solution {
public:
    int numSquares(int num) {
        vector<int>dp;
        dp.clear();
        dp.resize(10004,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        dp[4]=1;
        
        if(num<=4) return dp[num];
        
            for(int n=5;n<=num;n++){
                dp[n]=INT_MAX;
                for(int k=1;k*k<=n;k++){
                    dp[n] = min(dp[n],1+dp[n-k*k]);
                }
            }
        
          
        return dp[num];
        
    }
};