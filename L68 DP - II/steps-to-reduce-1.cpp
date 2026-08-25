#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int>dp;

// TOP Down DP
int f(int n) {
    if(n == 1) return 0;                //how many steps to reach 1 --> 1 , zero steps as it is already 1
    if(n ==2 || n == 3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1 + min({
        f(n - 1),
        (n % 2 == 0) ? f(n / 2) : INT_MAX,
        (n % 3 == 0) ? f(n / 3) : INT_MAX
    });
}
// Bottom up DP
int fbu(int n) {
    dp[0] = 0 ;
    dp[1] = 0 ;
    dp[2] = dp[3] = 1;

    for(int i = 4; i<= n  ; i++) {
        dp[i] = 1 + min({
        dp[n - 1],
        (n % 2 == 0) ? dp[n / 2] : INT_MAX,
        (n % 3 == 0) ? dp[n / 3] : INT_MAX
    });
    }
    return dp[n];
}


int main() {
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+3, -1);
    cout<<f(n)<<endl;
}