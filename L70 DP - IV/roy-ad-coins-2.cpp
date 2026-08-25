// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/roy-and-coin-boxes-1/?purpose=signup&source=problem-page&update=google

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<int>f(n+10, 0);
    
    int m;
    cin>>m;

    for(int i = 0 ; i<m ; i++){
        int L;
        int R;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }

    for(int i = 1 ; i<f.size() ; i++) {
        f[i] = f[i] + f[i-1];
    }

    vector<int>v(10000007, 0);
    for(int i = 0 ; i<=n; i++) {
        int coins = f[i];
        v[coins]++;
    }

    for(int i = v.size() - 2 ; i>=0 ; i--) {
        v[i]  = v[i+1] + v[i];
    }

    int q;
    cin>>q;

    while(q--) {
        int num;
        cin>>num;
        cout<<v[num]<<endl;
    }
}
