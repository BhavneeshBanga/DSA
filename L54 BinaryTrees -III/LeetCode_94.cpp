// https://leetcode.com/problems/binary-tree-inorder-traversal/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* node = root;
        vector<int> v;
        stack<TreeNode* > st;
        while(st.size() > 0 || node){
            if(node){
                st.push(node);
                node = node->left;
            } else{
                TreeNode* temp = st.top();
                st.pop();
                v.push_back(temp->val);
                node = temp->right;
            }
        }
        return v;        
    }
};