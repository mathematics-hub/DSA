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
    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans(height(root));
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        int i = 0;
        if (root != NULL) {
            st1.push(root);
        }
        while (!st1.empty() || !st2.empty()) {
            while (!st1.empty()) {
                TreeNode* temp = st1.top();
                st1.pop();
                ans[i].push_back(temp->val);
                if (temp->left) {
                    st2.push(temp->left);
                }
                if (temp->right) {
                    st2.push(temp->right);
                }
            }
            i++;

            while (!st2.empty()) {
                TreeNode* temp = st2.top();
                st2.pop();
                ans[i].push_back(temp->val);
                if (temp->right) {
                    st1.push(temp->right);
                }
                if (temp->left) {
                    st1.push(temp->left);
                }
            }
            i++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna