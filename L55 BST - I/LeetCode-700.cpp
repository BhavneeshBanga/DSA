// https://leetcode.com/problems/search-in-a-binary-search-tree/
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int value) {
        if(root==NULL || root->val == value) return root;
        else if(root->val > value) return searchBST(root->left, value);
        else return searchBST(root->right, value);
    }
};