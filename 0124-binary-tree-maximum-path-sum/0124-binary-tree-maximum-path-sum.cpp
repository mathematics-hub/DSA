/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxSum(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int l = maxSum(root->left);
        int r = maxSum(root->right);
        int sum = root->val + max(l, r);
        return sum >= 0 ? sum : 0;
    }
    void nodeWithTwoChild(TreeNode* root, int& sum) {
        if (root == NULL) {
            return;
        }
        int leftPath = maxSum(root->left);
        int rightPath = maxSum(root->right);
        sum = max(sum, root->val + leftPath + rightPath);

        nodeWithTwoChild(root->left, sum);
        nodeWithTwoChild(root->right, sum);
    }
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        nodeWithTwoChild(root, sum);
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna