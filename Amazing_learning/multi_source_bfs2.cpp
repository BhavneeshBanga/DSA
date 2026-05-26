//https://leetcode.com/problems/as-far-from-land-as-possible/
#define pp pair<int,int>
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {

        int n = grid.size();
        queue<pp> q;

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(grid[i][j] == 1) {
                    q.push({i, j});
                }
            }
        }
        if(q.empty() || (q.size() == n*n))
            return -1;
        
        int dr[] = {-1, 1, 0, 0};
        int dc[] = { 0, 0, -1, 1};

        vector<vector<int>> dist(n, vector<int>(n, INT_MIN));
        int layer = 0;

        while(!q.empty()) {
            int sz = q.size();
            for(int i = 0 ; i<sz ; i++) {
                auto curr = q.front();
                q.pop();

                int r = curr.first;
                int c = curr.second;

                for(int i = 0 ; i<4 ; i++) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if(nr >= 0 && nr < n && nc >= 0 && nc < n ) {
                        if(grid[nr][nc]==0) {
                            grid[nr][nc]=1;
                            q.push({nr, nc});
                        }
                    }
                }
            }
            layer += 1;
        }
        return layer-1;     //as first iteration are of land only
     }
};