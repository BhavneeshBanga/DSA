#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


vector<int> get_digits(int n){
    vector<int> d;
    while(n > 0){
        if(n%10 != 0){
            d.push_back(n%10);
        }
        n /= 10;
    }
    return d;    
}


int f(int n, vector<int> &dp){
    if(n==0) return 0;
    if(n<=9) return 1;
    int result = INT_MAX;
    vector<int> d = get_digits(n);
    if(dp[n] != -1) return dp[n];
    for(int i = 0 ; i<d.size() ; i++){
        result = min(result, f(n-d[i], dp));
    }
    return dp[n] = 1 + result;
}


// samaj ke bahar hai abhi yeh 
vector<int> dp(100000005, -1);
int fbu(int num){
    dp[0] = 0;
    for(int i = 1 ;i<= 9; i++) dp[i] = 1;
    for(int n = 10; n<= num ;n++){
        // n -> states
        // calc dp[n]
        vector<int> d = get_digits(n);
        int result = INT_MAX;
        for(int i = 0 ; i<d.size() ; i++){
            result = min(result, dp[n-d[i]]);
        }
        dp[n] = 1 + result;
    }
    return dp[num];
}

  
int main() {
    int n = 27;
    vector<int> dp(n+1, -1);
    // cout<<f(n)<<endl;
    // cout<<f(n, dp)<<endl;
    cout<<fbu(n)<<endl;
    
    return 0;
}