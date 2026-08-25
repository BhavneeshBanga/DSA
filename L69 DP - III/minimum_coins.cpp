// Minimizing Coins
 
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
        if(n-coins[i] < 0) continue;        // coin hai 11 ka aur 20 ka change karke koi matlab nahi hai
        result = min(result, f(n-coins[i]));
    }
    // result = INT_MAX  ka meaning hai for loop mai jaane k bad bhi result kabhi update hi nahi hua
    if(result ==INT_MAX) return dp[n] = INT_MAX;
    return dp[n] =  1 + result;
}


int main() {
    int n = 11;
    vector<int> coins = {1, 5, 7};
    int ans = f(n);
    if(ans == INT_MAX) cout<<"-1";
    else cout<<ans<<"\n";
    return 0;
}