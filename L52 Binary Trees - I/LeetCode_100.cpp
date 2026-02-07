// https://leetcode.com/problems/same-tree/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;

        if(p->val != q->val) return false;

        bool pi = isSameTree(p->left, q->left);
        if(pi==false) return false;

        bool qi = isSameTree(p->right, q->right);
        if(qi==false) return false;
        
        return true; 
    }
};