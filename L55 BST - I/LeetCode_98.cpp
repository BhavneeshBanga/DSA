// https://leetcode.com/problems/validate-binary-search-tree/description/
class Solution {
public: 
    long long maxintree(TreeNode* root){
        if(root==NULL) return LLONG_MIN;
        return max((long long)(root->val), max(maxintree(root->left),maxintree(root->right)));
    }
    long long  minintree(TreeNode* root){
        if(root==NULL) return LLONG_MAX;
        return min((long long)(root->val), min(minintree(root->left),minintree(root->right)));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        else if(root->left==NULL && root->right== NULL) return true;
        else if(root->val <= maxintree(root->left))  return false;
        else if(root->val >= minintree(root->right)) return false;
        else return isValidBST(root->left) && isValidBST(root->right);
    }
};

class Solution {
public:
    void helper(TreeNode* root, vector<long long> &ans){
        if(root==NULL) return;
        helper(root->left, ans);
        ans.push_back(root->val);
        helper(root->right, ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<long long > ans;
        helper(root, ans);
        for(int i = 1 ; i<ans.size(); i++){
            if(ans[i] <= ans[i-1]) return false;
        }
        return true;
    }
};