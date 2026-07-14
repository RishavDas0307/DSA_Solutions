/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* node, int target, int total){
        if (!node) {return false;}
        total += node->val;
        if (total==target && node->left==nullptr && node->right==nullptr) {return true;}
        return solve(node->left, target, total) || solve(node->right, target, total);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum, 0);
    }
};