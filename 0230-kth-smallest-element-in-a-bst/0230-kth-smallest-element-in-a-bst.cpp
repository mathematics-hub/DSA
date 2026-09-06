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
    void kth(TreeNode* root, int& k, int& ans) {
        if (root == NULL) {
            return;
        }
        kth(root->left, k, ans);
        if (k < 0) {
            return;
        }
        k--;
        if (k == 0) {
            ans = root->val;
            return;
        }
        kth(root->right, k, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        kth(root, k, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna