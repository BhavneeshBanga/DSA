// https://leetcode.com/problems/cheapest-flights-within-k-stops/

#define pp pair<int,int>
#define ppp pair<int,pair<int,int> >
class Solution {
public:
    vector<vector<pp>> graph;

    vector<vector<int>> dijkstra(int src, int n, int k) {
        priority_queue<ppp, vector<ppp> , greater<ppp> > pq;   // {distance, {node, steps }}

        vector<vector<int>> mp(n, vector<int>(k+2, INT_MAX));
        
        mp[src][0] = 0;

        pq.push({0, {src , 0}});
        while(!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            int steps = curr.second.second;

            if(steps == k+1) continue;
            
            for(auto neigh : graph[curr.second.first]) {
                if(steps <= k) {
                    if( mp[neigh.first][steps+1] > mp[curr.second.first][steps] + neigh.second) {
                        pq.push({mp[curr.second.first][steps] + neigh.second , {neigh.first, steps + 1}});
                        mp[neigh.first][steps+1] = mp[curr.second.first][steps] + neigh.second ;
                    }
                }
            }
        }
        return mp;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        graph.clear();
        graph.resize(n, vector<pp>());

        for(int i = 0 ; i<flights.size() ; i++){
            graph[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }

        vector<vector<int>> map = dijkstra(src, n, k);
    
        int minans = INT_MAX;
        for(int i = 0 ; i<=k+1 ; i++) {
            minans = min(minans, map[dst][i]);
        }
        if(minans == INT_MAX){
            return -1;
        } else return minans;
    }
};