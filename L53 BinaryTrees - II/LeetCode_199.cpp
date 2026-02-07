// https://leetcode.com/problems/binary-tree-right-side-view/description/
class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    void helper(TreeNode* root, int curr, int target, vector<int>&ans){
        if(root==NULL) return;
        if(curr==target){
            ans[target] = root->val;
        }
        helper(root->left, curr+1, target, ans);
        helper(root->right, curr+1, target, ans);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        int levels = level(root);
        vector<int> ans(levels, 0);
        for(int i = 0 ; i<levels ; i++){
            helper(root, 0 , i, ans);
        }
        return ans;
    }
};