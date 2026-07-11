//Question - https://leetcode.com/problems/minimum-weighted-subgraph-with-the-required-paths/description/

//Solution - https://leetcode.com/problems/minimum-weighted-subgraph-with-the-required-paths/solutions/8390574/3-dijkstra-approach-c-easy-by-bhavneeshb-wano/


#define ll long long
#define pp pair<ll,int>

class Solution {
public:
    vector<list<pp>>graph;
    vector<list<pp>>rev_graph;

    unordered_map<int, ll> dijkstra(int s, int n) {
        priority_queue<pp, vector<pp>, greater<pp> >pq;
        unordered_set<int>vis;
        unordered_map<int, ll> mp;
        for(int i = 0 ; i<n ; i++) {
            mp[i] = LLONG_MAX;
        }
        mp[s] = 0;

        pq.push({0, s});

        while(!pq.empty()) {
            auto curr = pq.top();
            if(vis.count(curr.second)) {
                pq.pop();
                continue;
            }
            vis.insert(curr.second);
            pq.pop();

            for(auto neighbour : graph[curr.second]) {
                if(!vis.count(neighbour.first) and mp[neighbour.first] > mp[curr.second] + neighbour.second ) {
                    pq.push({mp[curr.second] + neighbour.second , neighbour.first});
                    mp[neighbour.first] = mp[curr.second] + neighbour.second;
                }
            }
        }
        return mp;
    }
    unordered_map<int, ll> rev_dijkstra(int s, int n) {
        priority_queue<pp, vector<pp>, greater<pp> >pq;
        unordered_set<int>vis;
        unordered_map<int, ll> mp;
        for(int i = 0 ; i<n ; i++) {
            mp[i] = LLONG_MAX;
        }
        mp[s] = 0;

        pq.push({0, s});

        while(!pq.empty()) {
            auto curr = pq.top();
            if(vis.count(curr.second)) {
                pq.pop();
                continue;
            }
            vis.insert(curr.second);
            pq.pop();

            for(auto neighbour : rev_graph[curr.second]) {
                if(!vis.count(neighbour.first) and mp[neighbour.first] > mp[curr.second] + neighbour.second ) {
                    pq.push({mp[curr.second] + neighbour.second , neighbour.first});
                    mp[neighbour.first] = mp[curr.second] + neighbour.second;
                }
            }
        }
        return mp;
    }
    
    long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {
        graph.clear();
        graph.resize(n, list<pp>());

        rev_graph.clear();
        rev_graph.resize(n, list<pp>());

        for(int i = 0 ; i<edges.size() ; i++) {
            graph[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        }

        //graph with rev edges
        for(int i = 0 ; i<edges.size() ; i++) {
            rev_graph[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }

        unordered_map<int,ll> mp1 = dijkstra(src1, n);
        unordered_map<int,ll> mp2 = dijkstra(src2, n);
        unordered_map<int,ll> mp3 = rev_dijkstra(dest, n);


        long long ans = LLONG_MAX;

        for(int i = 0 ; i<n ; i++) {
            if(mp1[i] != LLONG_MAX &&  mp2[i] != LLONG_MAX && mp3[i] != LLONG_MAX){
                ans = min(ans, mp1[i] + mp2[i] + mp3[i]);
            }
        }
        if(ans != LLONG_MAX ) return ans;
        else return -1;
    }
};