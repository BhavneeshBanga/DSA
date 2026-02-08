// https://leetcode.com/problems/insert-into-a-binary-search-tree/
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int value) {
        TreeNode* newNode = new TreeNode(value);
        if(root==NULL) return newNode;
        if(root->val < value){
            if(root->right){
                insertIntoBST(root->right, value);
            } else{
                root->right = newNode;
            }
        }
        else{
            if(root->left){
                insertIntoBST(root->left, value);
            } else{
                root->left = newNode;
            }
        }
        return root;        
    }
};