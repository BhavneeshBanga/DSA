//aisa nahi hai ki koi bhi aisa element mila jo dono mai same nahi hai toh usko swap maar diya

#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

int dp[2000][2000][10];

ll KOrderLCS(int *a, int *b, int m, int n, int i, int j, int k) {
    if(n == i or m == j) {
        return 0;
    }
    if( dp[i][j][k] != -1) return dp[i][j][k];
    ll res = 0;


    if(a[i] == b[j]) {
        
    } else {

    }
}

int main() {
    
    return 0;
}