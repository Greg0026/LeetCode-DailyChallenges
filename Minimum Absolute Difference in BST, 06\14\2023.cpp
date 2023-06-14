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
    int vmin = INT_MAX;
    int x = INT_MIN;
public:
    int getMinimumDifference (TreeNode* root) {
        if (root==NULL) return 0;
        getMinimumDifference(root->left);
        if (x!=INT_MIN) vmin = min(vmin, root->val-x);
        x = root->val;
        getMinimumDifference(root->right);
        return vmin;
    }
};
