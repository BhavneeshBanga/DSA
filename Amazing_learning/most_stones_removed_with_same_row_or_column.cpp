// https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/
class Solution {
public:
    int find(vector<int>&par,int a) {
        return par[a] = ((par[a]==a) ? a : find(par, par[a]));
    }
    void Union(vector<int>&par, vector<int>&rank, int a, int b) {
        if(rank[a] > rank[b]) {
            par[b] = a;
        } 
        else if(rank[b] > rank[a] ) {
            par[a] = b;
        } 
        else{
            rank[a]++;
            par[b] = a;
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int cc = 0;         //connected component
        int n = stones.size();
        int offset = 10001;
        vector<int>par(20004);

        unordered_set<int> s;
        for(int i = 0 ; i<20004 ; i++) {
            par[i] = i;
        }
        vector<int>rank(20004, 0);

        for(int i = 0 ; i<n ; i++) {
            int row = stones[i][0];
            int col = stones[i][1] + offset;

            int x = find(par, row);
            int y = find(par, col);


            if(x!=y) {
                Union(par, rank, x, y);
            }

            s.insert(row);
            s.insert(col);
        }
        for(auto ele : s) {
            if(par[ele] == ele) {
                cc++;
            }
        }
        return n - cc;  
    }
};