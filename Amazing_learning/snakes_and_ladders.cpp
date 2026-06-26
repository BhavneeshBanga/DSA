//https://leetcode.com/problems/snakes-and-ladders/

#define pp pair<int,int>

class Solution {
public:
    pp helper(int num, int n) { //{r, c}
        int a = (num-1) / n;   
        int row = n - a - 1;
        int col = (num-1)%n; // from l->R
        if(a % 2 == 1 ) {
            col = n - col - 1;
        }
        return {row, col};
    }


    int snakesAndLadders(vector<vector<int>>& board) {
        //main bfs start
        int n = board.size();
        pp first = helper(1, n);

        queue<int>q;
        unordered_set<int>vis;

        q.push(1);
        vis.insert(1);

        int count = 0 ;

        while(!q.empty()) {
            int sz = q.size();
            while(sz--){

                int curr = q.front();
                if(curr == n*n) return count;
                q.pop();
                int start = curr + 1;
                int last = min(curr+6, n*n);

                for(int i = start ; i<=last ; i++) {
                    pp neighPP = helper(i, n);
                    int r = neighPP.first;
                    int c = neighPP.second;

                    int next = i;


                    if(board[r][c] != -1) {
                        next = board[r][c];
                    }
                    if(!vis.count(next)) {
                        q.push(next);
                        vis.insert(next);
                    }
                }
            }
            count++;
        }
        return -1;
    }
};