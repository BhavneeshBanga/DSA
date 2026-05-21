// https://leetcode.com/problems/shortest-bridge/
#define pp pair<int, pair<int,int> > 
class Solution {
public:
    queue<pair<int, int>> helper(int r, int c, vector<vector<int>>&grid, queue<pp>&q) {
        int rows = grid.size();
        int cols = grid.size();
        int dr[] = {-1, 1, 0, 0};
        int dc[] = { 0, 0, -1, 1};
        q.push({0, {r, c}});
        queue<pair<int,int>> qu;
        qu.push({r, c});
        grid[r][c] = -2;
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();

            int r = curr.second.first;
            int c = curr.second.second;

            for(int i = 0 ; i<4 ; i++) {

                int nr = r + dr[i];
                int nc = c + dc[i];

                if(nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
                    if(grid[nr][nc]==1){

                        grid[nr][nc] = -2;
                        q.push({0, {nr, nc}});
                        qu.push({nr, nc});
                    }
                }
            }
        }
        return qu;
    }
    int shortestBridge(vector<vector<int>>& grid) {

        int steps = 0;
        int rows = grid.size();
        int cols = grid.size();

        vector<vector<int> > dist(rows, vector<int>(cols, INT_MAX));
        queue<pp> q;
        queue<pair<int,int> > qu;
        bool found = false;

        for(int i = 0 ; i<rows  ; i++) {
            for(int j = 0 ; j<rows  ; j++) {
                if(grid[i][j]==1) {
                    found = true;
                    qu = helper(i,j,grid, q);
                    break;
                }
            }
            if(found) break;
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = { 0, 0, -1, 1};

        while(!qu.empty()) {
            int n = qu.size();
            for(int i = 0 ; i<n ; i++) {
                auto curr = qu.front();
                qu.pop();

                int r = curr.first;
                int c = curr.second;
                for(int i = 0 ; i<4 ; i++) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];


                    if(nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
                        if(grid[nr][nc]==1){
                            return steps;
                        }
                        if(grid[nr][nc]==0) {
                            if(steps + 1 < dist[nr][nc]) {
                                dist[nr][nc] = steps + 1;
                                qu.push( {nr, nc});
                            }
                        }
                    }
                }
            }
            steps++;
        }
        return steps;           
    }
};