#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> dp;

int f(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1 + min(f(n-1), min((n%2==0) ? f(n/2) : INT_MAX, (n%3==0) ? f(n/3) : INT_MAX));
}
int fbu(int n){
    dp.clear();
    dp.resize(n+1, -1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i = 4; i<=n ; i++){
        dp[i] = 1 + min(dp[i-1], min((n%2==0) ? dp[i/2] : INT_MAX, (n%3==0) ? dp[i/3] : INT_MAX));
    }
    return dp[n];
}

int main() {
    dp.clear();
    dp.resize(1005, -1);
    int n;
    cin>>n;
    cout<<f(n)<<endl<<fbu(n)<<endl;
}