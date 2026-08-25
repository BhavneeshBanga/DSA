// https://leetcode.com/problems/decode-ways/description/


class Solution {
public:
    int numDecodings(string s) {
        
        int n = s.length();
        vector<int>dp;
        dp.clear();
        dp.resize(n+1,0);

        dp[n] = 1;
        
        
        if(n==0) return 1;
        if(n==1){
            if(s[n-1]=='0'){
                return 0;
            } else{
                return 1; 
            }  
        } else{
            if(s[n-1] != '0'){
                dp[n-1] = 1;
            } else{ // last element is zero
                //compare it with second last element
                if(s[n-2] == '1' || s[n-2] =='2') {
                    dp[n-2]=1;
                } 
            }
            // cout<<dp[n-1]<<" ";
            for(int i=n-2;i>=0;i--) {
                // is s[i] a valid no.?
                if(s[i] != '0') {
                    if(((s[i] - '0')*10 + (s[i+1] - '0')) >= 10 and ((s[i] - '0')*10 + (s[i+1] - '0')) <= 26) {
                        dp[i] = dp[i+1] + dp[i+2];
                    } else{
                        dp[i] += dp[i+1];
                    }
                    // dp[i] = 1 + dp[i] + dp[i+1];
                    
                } else { // s[i] == 0
                    // if(s[i-1] == '1' || s[i-1] =='2') {
                    //     dp[i-1] += 1;
                    // }
                    dp[i] = 0;
                    // dp[i] = dp[i+1];
                }
                // cout<<dp[i]<<" ";
            }
        }
        
        
        return dp[0];
    }
};