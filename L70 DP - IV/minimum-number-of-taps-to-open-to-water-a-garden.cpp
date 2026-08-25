// https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/
// Solution - https://chatgpt.com/share/6a89c70b-3b04-83ee-b6aa-c5f0dbae80fe

class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {

        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;

        for(int i = 0 ; i<= n ; i++) {

            int start = max(0, i-ranges[i]);
            int end  = min(n, i+ranges[i]);

            int ans = INT_MAX;
            for(int j = start ; j<= end ; j++) {
                ans = min(ans, dp[j]);
            }

            if(ans != INT_MAX) {
                dp[end] = min(dp[end] ,ans + 1);
            }
        }
        return dp[n] == INT_MAX ? -1 : dp[n];
    }
};




// dp[0] = 0
// Matlab:
// 0 tak pahunchne ke liye mujhe 0 taps chahiye.

// dp[x] ka matlab:
// 0 se x tak paani pahunchane ke liye minimum taps kitne chahiye.


