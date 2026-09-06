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
/*class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> inorder;
        while (root) {
            if (root->left == NULL) {
                inorder.push_back(root->val);
                root = root->right;
            } else {
                TreeNode* curr = root->left;
                while (curr->right != NULL && curr->right != root) {
                    curr = curr->right;
                }
                if (curr->right == NULL) {
                    curr->right = root;
                    root = root->left;
                } else {
                    curr->right = NULL;
                    inorder.push_back(root->val);
                    root = root->right;
                }
            }
        }
        for (int i = 0; i < inorder.size() - 1; i++) {
            if (inorder[i] >= inorder[i + 1]) {
                return false;
            }
        }
        return true;
    }
};*/

class Solution {
public:
    bool isBST(TreeNode* root, TreeNode*& prev) {
        if (root == NULL) {
            return true;
        }
        bool l = isBST(root->left, prev);
        if (l == false) {
            return false;
        }
        if (prev != NULL && prev->val >= root->val) {
            return false;
        }
        prev = root;
        int r = isBST(root->right, prev);
        if (r == false) {
            return false;
        }
        return true;
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return isBST(root, prev);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna