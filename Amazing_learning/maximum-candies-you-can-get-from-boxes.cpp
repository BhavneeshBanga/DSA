// https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes/
// https://chatgpt.com/share/6a647088-94a4-83ee-8826-65c584e86b67

// BEATS - 18%
class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {

        int n = status.size();

        vector<bool>havekey(n, false);
        vector<bool>havebox(n, false);
        vector<bool>opened(n, false);

        queue<int>q;
        int noc = 0;

        for(int i = 0 ; i<initialBoxes.size() ; i++) {

            if(status[initialBoxes[i]] == 1 || havekey[initialBoxes[i]] ){
                q.push(initialBoxes[i]);
            }

            havebox[initialBoxes[i]] = true;
        }
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();


            if(opened[curr]){
                continue;
            }
            
            opened[curr] = true;

            noc += candies[curr];

            for(auto key : keys[curr]) {
                havekey[key] = true;
                if(havebox[key] and !opened[key]){
                    q.push(key);
                }
               
            }
            for(auto box : containedBoxes[curr]) {
                havebox[box] = true;
            }

            for(auto box : containedBoxes[curr]) {
                if(havebox[box] && (not opened[box]) && ( status[box] == 1 || havekey[box] )){
                    q.push(box);
                }
            }
        }
        return noc; 
    }
};




