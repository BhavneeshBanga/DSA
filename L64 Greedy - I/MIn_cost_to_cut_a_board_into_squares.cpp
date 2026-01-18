#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;

bool cmp(int x, int y){
    return x > y;
}

ll MinCostToBreakGrid(vector<ll> &vertical, vector<ll> &horizontal){
    sort(vertical.begin(), vertical.end(), cmp);
    sort(horizontal.begin(), horizontal.end(), cmp);      //sorted in decreasing order
    int hz = 1;
    int vr = 1;
    int h = 0;
    int v = 0;
    int ans = 0;
    while(h < horizontal.size() and v < vertical.size()){
        if(vertical[v] > horizontal[h]){
            ans += vertical[v]*vr;
            hz++;

            v++;
        }
        else{
            ans += horizontal[h]*hz;
            vr++;

            h++;
            
        }   
    }
    while(h<horizontal.size() ) {
        ans += horizontal[h]*hz;
        vr++;

        h++;
    }
    while(v<vertical.size() ) {
        ans += vertical[v]*vr;
        hz++;

        v++;
    }
    return ans;
};

int main() {
    vector<ll> vertical = {2, 1, 3, 1, 4};
    vector<ll> horizontal = {4, 1, 2};
    cout<<MinCostToBreakGrid(horizontal, vertical);
    
    return 0;
}