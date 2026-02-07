// https://leetcode.com/problems/diameter-of-binary-tree/description/

class Solution {
public:
    int Levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(Levels(root->left), Levels(root->right));
    }
    int helper(TreeNode* root, int  &maxDia){
        if(root==NULL) return 0;
        int dia =  Levels(root->left) + Levels(root->right);
        maxDia = max(maxDia, dia);
        helper(root->left, maxDia);
        helper(root->right, maxDia);
        return maxDia;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        helper(root, maxDia); 
        return maxDia;
    }
};