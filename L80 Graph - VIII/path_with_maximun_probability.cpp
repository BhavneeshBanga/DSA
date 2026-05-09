//https://leetcode.com/problems/path-with-maximum-probability/
#define pp pair<double, double>   //{probabilit, node}
class Solution {
public:
    vector<list<pp> > gr;

    void add_edge(int u, int v, double wt, bool bidir = true){
        gr[u].push_back({v, wt});
        if(bidir){
            gr[v].push_back({u, wt});
        }
    }

    unordered_map<int, double> dijkstra(int src, int n){    // O ( VlogV + ElogV)
        priority_queue<pp> pq;    //{dist, node}
        unordered_set<int> visited;
        vector<int> via(n+1);
        unordered_map<int, double> mp;    //{node, probability}
        for(int i = 0 ; i<n ;i++){      //  O(V)
            mp[i] = 0;
        }
        mp[src] = 1;    
        pq.push({1, src});

        while(!pq.empty()){     // O ((V+E)logV)
            pp curr = pq.top();
            if(visited.count(curr.second)){
                pq.pop();
                continue;
            }
            visited.insert(curr.second);
            pq.pop();
            for(auto neighbour : gr[curr.second]){
                if(!visited.count(neighbour.first) and mp[neighbour.first] < mp[curr.second] * neighbour.second ){
                    pq.push({mp[curr.second] * neighbour.second , neighbour.first});
                    via[neighbour.first] = curr.second;
                    mp[neighbour.first] = mp[curr.second] * neighbour.second ;
                }
            }
        }
        return mp;
    }
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        gr.resize(n, list<pp >() );
        for(int i = 0 ; i<edges.size() ; i++) {
            add_edge(edges[i][0], edges[i][1], succProb[i]);
        }
        unordered_map<int, double> sp = dijkstra(start_node, n);
        if(sp[end_node]==0) return 0.0;
        else return sp[end_node];
    }
};
