//  https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/


#define mod 1000000007

class Solution {
public:
    vector<vector<int>>dp;

    int f(int n, int k, int t) {
        if(n==0 && t==0) return 1;    // *
        if(n==0) return 0;

        if(dp[n][t] != -1) return dp[n][t];

        int sum = 0;

        for(int v = 1 ; v<=k ; v++) {
            
            if(t-v < 0) break;  // target small ho gya dice k no. se
            sum = ((sum % mod) + (f(n-1, k, t-v)%mod) % mod); 
        }
        return dp[n][t] = sum%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp.clear();
        dp.resize(35, vector<int>(1005, -1));
        return f(n, k, target);
    }
};


Ab koi dice nahi bachi aur target bhi exactly 0 ho gaya.
oh humne apna target successfully achieve kar liya.

Isliye:

if(n == 0 && t == 0) return 1;




Agar n == 0 but t != 0?

Example:

f(0, 2)

Matlab:

Dice khatam ho gayi, lekin target 2 abhi bhi baaki hai.

Ab target complete nahi hua ❌

Isliye:

if(n == 0) return 0;