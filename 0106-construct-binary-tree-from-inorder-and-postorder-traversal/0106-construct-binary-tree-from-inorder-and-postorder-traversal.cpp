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
    int find(vector<int>& inorder, int target, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == target) {
                return i;
            }
        }
        return -1;
    }
    TreeNode* tree(vector<int>& inorder, vector<int>& postorder, int index,
                   int instart, int inend) {
        if (instart > inend) {
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[index]);
        int pos = find(inorder, postorder[index], instart, inend);
        root->left = tree(inorder, postorder, index - (inend - pos) - 1,
                          instart, pos - 1);
        root->right = tree(inorder, postorder, index - 1, pos + 1, inend);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index = postorder.size() - 1;
        int instart = 0;
        int inend = inorder.size() - 1;
        return tree(inorder, postorder, index, instart, inend);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna