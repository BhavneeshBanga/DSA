// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/
// 

#define pp pair<int,int>
class Solution {
    public:
        vector<list<pair<int,int>>>gr;
        
        int minScore(int n, vector<vector<int>>& roads) {
        gr.clear();
        gr.resize(n+1, list<pp>());

        for (int i = 0; i < roads.size(); i++) {
            gr[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            gr[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }

        vector<int> need(n + 1, 0);

        queue<int> q;
        unordered_set<int> vis;

        q.push(1);
        vis.insert(1);
        need[1] = true;

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            for (auto neigh : gr[curr]) {
                if (vis.find(neigh.first) == vis.end()) {
                    vis.insert(neigh.first);
                    q.push(neigh.first);
                    need[neigh.first] = true;
                }
            }
        }
        int min_ans =INT_MAX;
        for(int i=0;i<roads.size();i++){
            if(need[roads[i][0]] == true and need[roads[i][1]]==true){
                min_ans = min(min_ans,roads[i][2]);
            }
        }
        return min_ans;
    }
};