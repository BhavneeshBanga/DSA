// DSU implementation
#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> &parent, int x){
    // T.C O(log*n)
    // this method return which group/ clusturs x belongs to 
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

void Union(vector<int>&parent, vector<int>&rank, int a, int b) {
        if(rank[a] > rank[b]) {
            par[b] = a;
        } 
        else if(rank[b] > rank[a] ) {
            par[a] = b;
        } 
        else{
            rank[a]++;
            par[b] = a;
        }
    }


int main() {
    int n, m;
    cin>>n>>m;
    // n -> elements, m ->no of queries

    vector<int> parent(n+1);
    vector<int> rank(n+1, 0);
    for(int i = 0 ; i<= n ; i++){
        parent[i] = i;
    }
    
    while(m--){
        string str;
        cin>>str;
        if(str == "Union"){
            int x, y;
            cin>>x>>y;
            Union(parent, rank, x, y);
        }
        else{
            int x;
            cin>>x;
            cout<<find(parent, x)<<"\n";
        }
    }
    return 0;
}