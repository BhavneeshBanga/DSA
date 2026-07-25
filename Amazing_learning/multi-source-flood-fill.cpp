// https://leetcode.com/problems/multi-source-flood-fill/description/

#define pp pair<int,int>
class Solution {
public:
    vector<vector<int>> colorGrid(int m, int n, vector<vector<int>>& sources) {

        vector<vector<int>>color(m, vector<int>(n, 0));
        vector<vector<int>>dist(m, vector<int>(n, -1));

        queue<pp> q;

        for(auto &s : sources){
            int r = s[0];
            int c = s[1];
            int clr = s[2];

            color[r][c] = clr;
            dist[r][c] = 0;
            q.push({r,c});
        }

        int dr[] = {0,0,1,-1};
        int dc[] = {1,-1,0,0};

        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int nr = r + dr[k];
                int nc = c + dc[k];
                if(nr >= 0 && nr < m && nc >= 0 && nc < n) {
                    int newDist = dist[r][c] + 1;

                    if(dist[nr][nc]==-1){
                        dist[nr][nc]=newDist;
                        color[nr][nc]=color[r][c];
                        q.push({nr,nc});
                    }
                    else if(dist[nr][nc]==newDist){
                        color[nr][nc]=max(color[nr][nc],color[r][c]);
                    }
                }
            }
        }

        return color;
    }
};