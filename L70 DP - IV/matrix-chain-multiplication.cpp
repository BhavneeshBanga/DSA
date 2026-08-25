#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<vector<int>>dp;

int f(vector<int>arr, int i, int j) {
    if(i==j || i+1 == j) return 0;

    if(dp[i][j] != -1)  return dp[i][j];
    int ans = INT_MAX;
    for(int k = i+1 ; k<j ; k++) {
        ans = min(ans, f(arr, i, k) + f(arr, k, j) + arr[i] * arr[k] * arr[j]);
    }
    return dp[i][j] = ans;
}


int fbu(vector<int>arr, int i, int j) {
    if(i==j || i+1 == j) return 0;

    if(dp[i][j] != -1)  return dp[i][j];
    int ans = INT_MAX;
    for(int k = i+1 ; k<j ; k++) {
        ans = min(ans, f(arr, i, k) + f(arr, k, j) + arr[i] * arr[k] * arr[j]);
    }
    return dp[i][j] = ans;
}



int main() {
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1005, vector<int>(1000, -1));

    vector<int>v(n);
    for(int i = 0 ; i<n ; i++) cin>>v[i];

    
    cout<<f(v, 0, n-1);
    return 0;
}