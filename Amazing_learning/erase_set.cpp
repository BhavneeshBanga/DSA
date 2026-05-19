// https://leetcode.com/problems/intersection-of-multiple-arrays/
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_set<int> s(nums[0].begin(), nums[0].end());
        
        for(int i = 1 ; i<nums.size() ; i++){
            unordered_set<int> s2(nums[i].begin(), nums[i].end());
            // for(auto ele : s) {          //error came
            //     if(!s2.contains(ele)) {
            //         s.erase(ele);
            //     }
            // }
            for(auto it = s.begin(); it != s.end(); ) {
                if(!s2.contains(*it)) {
                    it = s.erase(it);  // safe: returns next iterator
                } else {
                    ++it;
                }
            }
        }
        vector<int> ans(s.begin(), s.end());
        sort(ans.begin(), ans.end());
        return ans;
    }
};