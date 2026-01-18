#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<vector<int>> dp;
int f(int i, int j, vector<int> &arr){
    if(i==j or i+1==j) return 0;
    int ans = INT_MAX;
    if(dp[i][j] != -1) return dp[i][j];

    for (int k = i+1 ; k<j ; k++){
        ans = min(ans, f(i, k, arr) + f(k , j, arr) + arr[i]*arr[k]*arr[j]);
    }
    return dp[i][j] = ans;
}
int main() {
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1004, vector<int> (1004, -1));
    vector<int> v = {40, 20, 30, 10, 30};
    for(int len = 3 ; len<= n ; len++){
        for(int i = 0 ; i+len-1 < n ;i++){
            int j = i+len-1;
            dp[i][j] = INT_MAX;
            for(int k = i+1 ; k<j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + v[i]* v[k]* v[j]);
            }
        }
    }    
    cout<<f(0, n-1, v);
    return 0;
}