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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> subans;
        if (root == NULL) {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        bool dir = 1;
        while (q.size() != 1) {
            if (q.front() != NULL) {
                TreeNode* temp = q.front();
                subans.push_back(temp->val);
                if (dir) {
                    if (temp->left) {
                        q.push(temp->left);
                    }
                    if (temp->right) {
                        q.push(temp->right);
                    }
                } else {
                    if (temp->right) {
                        q.push(temp->right);
                    }
                    if (temp->left) {
                        q.push(temp->left);
                    }
                }
                q.pop();
            }
            if (q.front() == NULL) {
                ans.push_back(subans);
                subans.clear();
                // q.pop();
                stack<TreeNode*> st;
                while (!q.empty()) {
                    st.push(q.front());
                    q.pop();
                }
                while (!st.empty()) {
                    q.push(st.top());
                    st.pop();
                }
                // q.push(NULL);
                dir = dir ? 0 : 1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna