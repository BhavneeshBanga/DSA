#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> coins;
vector<int> dp(1000006, -1);


int f(int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return  dp[n];
    int result = INT_MAX;
    for(int i = 0 ; i<coins.size() ; i++){
        if(n-coins[i] < 0) continue;
        result = min(result, f(n-coins[i]));
    }
    if(result ==INT_MAX) return dp[n] = -1;
    return dp[n] =  1 + result;
}
int main() {
    int n = 11;
    vector<int> coins = {1, 5, 7};
    cout<<f(n)<<endl;
}