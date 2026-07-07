// Question
// https://leetcode.com/problems/number-of-restricted-paths-from-first-to-last-node/

// <Solution/>
// https://leetcode.com/problems/number-of-restricted-paths-from-first-to-last-node/solutions/8381093/c-dijkstra-dp-bfs-approach-by-bhavneeshb-a2zo/

#define pp pair<ll,int>
#define ll long long int

class Solution {
public:
    vector<list<pp>> graph; // {dist, node}

    unordered_map<int, ll> dijkstra(int s, int n) {
        unordered_set<int> vis;
        priority_queue<pp, vector<pp>, greater<pp>> pq; // {dist, node}
        unordered_map<int, ll> map;

        for (int i = 1; i <= n; i++) map[i] = LLONG_MAX;

        map[s] = 0;
        pq.push({0, s});

        while (!pq.empty()) {
            auto curr = pq.top();
            if (vis.count(curr.second)) { pq.pop(); continue; }
            vis.insert(curr.second);
            pq.pop();

            for (auto neigh : graph[curr.second]) {
                if (!vis.count(neigh.first) &&
                    map[curr.second] != LLONG_MAX &&
                    map[neigh.first] > map[curr.second] + neigh.second) {
                    map[neigh.first] = map[curr.second] + neigh.second;
                    pq.push({map[neigh.first], neigh.first});
                }
            }
        }
        return map;
    }

    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        graph.clear();
        graph.resize(n + 1, list<pp>());

        for (int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            graph[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }

        unordered_map<int, ll> map = dijkstra(n, n);
        vector<pair<ll, ll>> dist;
        for (auto ele : map) {
            dist.push_back({ele.second, ele.first});
        }
        sort(dist.begin(), dist.end());

        vector<long long int> dp(n + 1, 0);
        dp[n] = 1;

        for (auto pair : dist) {
            for (auto neigh : graph[pair.second]) {
                if (map[pair.second] > map[neigh.first]) {
                    dp[pair.second] = (dp[pair.second] + dp[neigh.first]) % 1000000007;
                }
            }
        }

        return (dp[1] % 1000000007);
    }
};