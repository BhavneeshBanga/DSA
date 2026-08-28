// https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/

//Bottom up DP
class Solution {
public:
    int n;
    vector<int> cuts;
    vector<vector<int>> dp;


    int minCost(int num, vector<int>& c) {
        sort(c.begin(), c.end());
        dp.clear();
        dp.resize(105, vector<int>(105, 2147483647));
        c.insert(c.begin(), 0);
        c.push_back(num);
        
        cuts = c;
        n = c.size();

        for(int i =  1; i<c.size() ; i++) {
            dp[i-1][i] = 0;
        }

        for(int len = 3; len <= n ; len++) {
            for(int i = 0 ; i+len-1 < n ; i++) {
                int j = len+i-1;
                for(int k = i+1 ; k<j ; k++) {
                    int x = c[i];
                    int y = c[j];
                    int z = c[k];
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + y-x);
                }
            }
        }
        return dp[0][c.size()-1];
    }
};


//   0 and n is liye add kiye kyuki hamne puri stick k 0 se n tak answer chahiyae, yani k 
//   dp[0][n]
//   