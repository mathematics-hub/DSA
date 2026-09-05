/* Structure of Binary Tree Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	vector<int> inOrder(Node* root) {
		// code here
		vector<int> ans;
		while (root) {
			if (root->left == NULL) {
				ans.push_back(root->data);
				root = root->right;
			}
			else {
				Node *curr = root->left;
				while (curr->right != NULL && curr->right != root) {
					curr = curr->right;
				}
				if (curr->right == NULL) {
					curr->right = root;
					root = root->left;
				}
				else {
					curr->right = NULL;
					ans.push_back(root->data);
					root = root->right;
				}
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna