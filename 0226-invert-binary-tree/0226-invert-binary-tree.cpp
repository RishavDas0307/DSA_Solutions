class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) {return root;}
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for (int i=0; i<size; i++){
                TreeNode* curr=q.front();
                q.pop();
                swap(curr->left, curr->right);
                if (curr->left) {q.push(curr->left);}
                if (curr->right) {q.push(curr->right);}
            }
        }
        return root;
    }
};