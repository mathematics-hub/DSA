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
    struct result {
        bool isBst;
        int sum;
        int minval;
        int maxval;
    };
    result findSum(TreeNode* root, int& maxSum) {
        if (root == NULL) {
            return {true, 0, INT_MAX, INT_MIN};
        }
        result lchild = findSum(root->left, maxSum);
        result rchild = findSum(root->right, maxSum);
        if (lchild.isBst && rchild.isBst && lchild.maxval < root->val &&
            root->val < rchild.minval) {
            int currSum = root->val + lchild.sum + rchild.sum;
            maxSum = max(maxSum, currSum);
            return {true, currSum, min(root->val, lchild.minval),
                    max(root->val, rchild.maxval)};
        }
        return {false, 0, INT_MIN, INT_MAX};
    }
    int maxSumBST(TreeNode* root) {
        int maxSum = 0;
        result x = findSum(root, maxSum);
        return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna