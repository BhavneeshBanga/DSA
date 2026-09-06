// https://leetcode.com/problems/burst-balloons/description/

#define ll long long int
class Solution {
public:

    vector<vector<ll>>dp;
    int n;
    vector<int>ar;



    int f(int i, int j) {
        // if(i == j) return max(ar[i], ar[j]);
        if(i == j || i+1 == j) return 0;


        
        if(dp[i][j] != -1) return dp[i][j];
        int ans = -1;

        for(int k = i+1 ; k<j ; k++) {
            ans = max(ans, f(i, k) + f(k, j) + ar[i]*ar[k]*ar[j]);
        }
        return dp[i][j] = ans;
    }

    int maxCoins(vector<int>& num) {
        dp.clear();
        dp.resize(305, vector<ll>(305, -1));


        num.insert(num.begin(), 1);
        num.push_back(1);


        n = num.size();
        ar = num;


        // these are for 2 adjacent
        // for(int 1 ; i<n-1 ; i++) {
        //     dp[i][j] = max(dp[i-1][?] * dp[i][?] * dp[i+1][j],   dp[i][?] * dp[i+1][?] * dp[i+2][j]);
        // }

        // for(int len = 3 ; len < n ; len++) {
        //     for(int i = 0  ; i+len-1 < n ; i++) {
        //         int j = i+len-1;
        //         for(int k = i+1, k<j ; k++) {
        //             dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + ar[k-1]*ar[k]*ar[k+1]);
        //         }
        //     }
        // }
        // return dp[0][n];

        return f(0, num.size()-1);

       
    }
};


//   don't think about bust the first baloon, think of it as we burst the last balloon