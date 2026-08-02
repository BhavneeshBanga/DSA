// https://leetcode.com/problems/shortest-path-with-alternating-colors/


#define pp pair<int,int>

class Solution {
public:
    vector<list<int>>rg;
    vector<list<int>>bg;

    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& re, vector<vector<int>>& be) {
        rg.clear();
        rg.resize(n , list<int>());
        bg.clear();
        bg.resize(n , list<int>());

        for(int i = 0; i<re.size() ; i++) {
            rg[re[i][0]].push_back(re[i][1]);
        }
        for(int i = 0; i<be.size() ; i++) {
            bg[be[i][0]].push_back(be[i][1]);
        }


        queue<pp>q;
        q.push({0, 0}); //0 -> red
        q.push({0, 1}); //1 -> blue

        vector<vector<int>>ans(n, vector<int>(2, -1));
        int count = 1;
        ans[0][0] = 0;
        ans[0][1] = 0;


        while(!q.empty()) {
            int sz = q.size();
                for(int i = 0 ; i<sz ; i++) {

                
                auto curr = q.front();
                q.pop();

                auto lastEdgeColor = curr.second;

                bool nextEdgeColor = !lastEdgeColor;

                if(nextEdgeColor){ // blue new color
                    for(auto neigh : bg[curr.first]) {
                        if(ans[neigh][nextEdgeColor] == -1) {
                            ans[neigh][nextEdgeColor] = count;
                            q.push({neigh,nextEdgeColor });
                        }
                    }
                } else{
                    for(auto neigh : rg[curr.first]) {
                        if(ans[neigh][nextEdgeColor] == -1) {
                            ans[neigh][nextEdgeColor] = count;
                            q.push({neigh,nextEdgeColor });
                        }
                    }
                }
            }
            count++;
        }
        vector<int>fans;
        int minans = INT_MAX;
        fans.push_back(0);
        for(int i = 1 ; i<ans.size() ; i++) {
            if(ans[i][0] == -1 && ans[i][1] != -1){
                fans.push_back(ans[i][1]);
            } 
            else if(ans[i][1] == -1 && ans[i][0] != -1){
                fans.push_back(ans[i][0]);
            } 
            else if(ans[i][0] == -1 && ans[i][1] == -1) {
                fans.push_back(-1);
            } else{
                fans.push_back(min(ans[i][0], ans[i][1]));
            }
        }
        return fans;
    }
};