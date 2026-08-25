#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<vector<int>> dp;

int main() {
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1004, vector<int> (1004, 0));
    vector<int> v = {40, 20, 30, 10, 30};

    for(int len = 3 ; len<n ; len++) {
        for(int i = 0 ; len + i - 1 < n ; i++) {
            int j = len + i - 1;
            dp[i][j] = INT_MAX;
            for (int k = i+1 ; k<j ; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + v[i]*v[k]*v[j]);
            }
            
        }
    }
    cout<<dp
    
    return 0;
}