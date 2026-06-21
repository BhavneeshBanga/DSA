//shortest_path_with_at_most_k_consecutive_identical_characters.cpp
//modified dijkstra
#define pp pair<int,int>

class Solution {
public:
    vector<list<pp>> gr;
    
   vector<vector<long long>>  dijkstra(int src, int n, int k, string labels){    // O ( VlogV + ElogV)
        priority_queue<
            tuple<long long,int,int>,
            vector<tuple<long long,int,int>>,
            greater<tuple<long long,int,int>>
        > pq;
        
        vector<vector<long long>> dist(
            n,
            vector<long long>(k+1, LLONG_MAX)
        );
        
        dist[src][1] = 0;    
        pq.push({0, src, 1});
    
        while(!pq.empty()) {
            auto [currDist,node,streak] = pq.top();
            pq.pop();
        
            if(currDist != dist[node][streak])
                continue;
        
            for(auto &[next,wt] : gr[node]){
                int newStreak;
        
                if(labels[next] == labels[node])
                    newStreak = streak + 1;
                else
                    newStreak = 1;
        
                if(newStreak > k)
                    continue;
        
                long long newDist = currDist + wt;
        
                if(newDist < dist[next][newStreak]) {
                    dist[next][newStreak] = newDist;
        
                    pq.push({
                        newDist,
                        next,
                        newStreak
                    });
                }
            }
        }
        return dist;
    }
        
    void display(){
        for(int i = 0 ; i<gr.size() ; i++) {
            cout<<i<<" -> ";
            for (auto ele : gr[i]){
                cout<<"(" <<ele.first<<" "<<ele.second<<")"<<" , ";
            }
            cout<<endl;
        }
    }
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        gr.clear();
        gr.resize(n, list<pp>());
        for(int i = 0 ; i<edges.size() ;i++) {
            gr[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        }
        // display();
    

        vector<vector<long long>>  sp = dijkstra(0, n, k, labels);
       long long ans = LLONG_MAX;
        
        for(int s=1; s<=k; s++) {
            ans = min(ans, sp[n-1][s]);
        }
        if(ans == LLONG_MAX)
            return -1;
        
        return (int)ans;
    }
};