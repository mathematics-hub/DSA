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
    TreeNode* BST(vector<int>& preorder, int& index, int minval, int maxval) {
        if (index == preorder.size() || preorder[index] < minval ||
            preorder[index] > maxval) {
            return NULL;
        }
        TreeNode* temp = new TreeNode(preorder[index++]);
        temp->left = BST(preorder, index, minval, temp->val);
        temp->right = BST(preorder, index, temp->val, maxval);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return BST(preorder, index, INT_MIN, INT_MAX);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna