#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <queue>

#define ll long long int 
#define pp pair<int, int>

using namespace std;

vector<list<pp> > gr;

void add_edge(int u, int v, int wt, bool bidir = true){
    gr[u].push_back({v, wt});
    if(bidir){
        gr[v].push_back({u, wt});
    }
}

unordered_map<int, int> dijkstra(int src, int n){    // O ( VlogV + ElogV)
    priority_queue<pp, vector<pp>, greater<pp> > pq;    //{dist, node}
    unordered_set<int> visited;
    vector<int> via(n+1);
    unordered_map<int, int> mp;    
    for(int i = 0 ; i<n ;i++){      //  O(V)
        mp[i] = INT_MAX;
    }
    mp[src] = 0;    
    pq.push({0, src});

    while(!pq.empty()){     // O ((V+E)logV)
        pp curr = pq.top();
        if(visited.count(curr.second)){
            pq.pop();
            continue;
        }
        visited.insert(curr.second);
        pq.pop();
        for(auto neighbour : gr[curr.second]){
            if(!visited.count(neighbour.first) and mp[neighbour.first] > mp[curr.second] + neighbour.second ){
                pq.push({mp[curr.second] + neighbour.second , neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = mp[curr.second] + neighbour.second ;
            }
        }
    }
    return mp;
}

int main() {
    int n, m;
    cin>>n>>m;
    gr.resize(n, list<pp >() );
    while(m--){
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }
    cout<<"Done input"<<"\n";
    int src, dest;
    cout<<"Enter sourrce>>";
    cin>>src;
    unordered_map<int, int> sp = dijkstra(src, n);
    for(auto ele : sp) {
        cout<<ele.first << " " << ele.second<<" \n";
    }
    cout<<"Enter destination element>>";
    cin>>dest;
    cout<<sp[dest]<<"\n";
    
    return 0;
}