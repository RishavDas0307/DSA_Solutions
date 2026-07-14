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
    vector<vector<int>> result;
    void solve(TreeNode* node, int target, int total, vector<int> ans){
        if (!node) {return;}
        total += node->val;
        ans.push_back(node->val);
        if (total==target && node->left==nullptr && node->right==nullptr) {result.push_back(ans); return;}
        solve(node->left, target, total, ans);
        solve(node->right, target, total, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        solve(root, targetSum, 0, ans);
        return result;
    }
};