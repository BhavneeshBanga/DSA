// https://leetcode.com/problems/path-sum-ii/description/
class Solution {
public:
    void helper(TreeNode* root, int sum, vector<int>v, vector<vector<int>>& ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
            if(sum==root->val){
                ans.push_back(v);
                return;
            }
        }
        v.push_back(root->val);
        helper(root->left, sum - (root->val) , v, ans);
        helper(root->right, sum - (root->val) , v, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        cout<<"Kudh hi kiya hai😎";
        vector<vector<int>> ans;
        vector<int>v;
        helper(root, sum, v, ans);
        return ans;
    }
};