/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || p == root || q == root) {
            return root;
        }
        TreeNode* leftptr = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightptr = lowestCommonAncestor(root->right, p, q);
        if (leftptr != NULL && rightptr != NULL) {
            return root;
        }
        return (leftptr != NULL) ? leftptr : rightptr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna