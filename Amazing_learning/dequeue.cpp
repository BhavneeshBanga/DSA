// https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/
#define pp pair<int, pair<int,int>>
class Solution {
public:
    int minCost(vector<vector<int>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> dist(rows, vector<int>(cols, INT_MAX));
        deque<pp> dq;

        dist[0][0] = 0;

        dq.push_back({0, {0, 0}});

        int dr[] = {0, 0, 1, -1};
        int dc[] = {1, -1, 0, 0}; 

        int currentVal = 0;
        int neighbourVal = 0;
        int newcost = 0;
    
        while(!dq.empty()) {
            auto curr = dq.front();
            dq.pop_front();

            currentVal = curr.first;

            int r = curr.second.first;
            int c = curr.second.second;

            if(r==rows-1 && c==cols-1) return currentVal;

            if(currentVal > dist[r][c]) continue;

            for(int i =  0 ; i< 4 ; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if(nr>=0 && nr<rows && nc>=0 && nc < cols) {
                    neighbourVal = grid[nr][nc];

                    if(grid[r][c]== i+1){
                        newcost = currentVal;
                    } else{
                        newcost = currentVal+1;
                    } 

                    if(newcost < dist[nr][nc]){
                        if(grid[r][c] == i+1){
                            dist[nr][nc] = newcost;
                            dq.push_front({newcost, {nr, nc}});
                        } else{
                            dist[nr][nc] = newcost;
                            dq.push_back({newcost, {nr, nc}});
                        }  
                    }
                }
            } 
        }
        return dist[rows-1][cols-1];
    }
};