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
    int getleftheight(TreeNode* root) {
        int height = 0;
        while (root) {
            height++;
            root = root->left;
        }
        return height;
    }
    int getrightheight(TreeNode* root) {
        int height = 0;
        while (root) {
            height++;
            root = root->right;
        }
        return height;
    }
    int countNodes(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int leftheight = getleftheight(root);
        int rightheight = getrightheight(root);
        if (leftheight == rightheight) {
            return (1 << leftheight) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna