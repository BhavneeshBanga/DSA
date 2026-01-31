#include<iostream>
using namespace std;
int fibbo(int n, vector<int>&dp){
    if(n==1 || n==0) return 1;
    else
        return dp[i] = fibbo(n-1) + fibbo(n-2);
    
}

int main(){
    vector<int> dp(1000, -1);
    cout<<fibbo(6,dp);
}