/* Structure of a Binary Search Tree node
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
	bool isBST(Node* root) {
		// code here
		vector<int> inorder;
		while (root) {
			if (root->left == NULL) {
				inorder.push_back(root->data);
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
					inorder.push_back(root->data);
					root = root->right;
				}
			}
		}
		for (int i = 0; i<inorder.size() - 1; i++) {
			if (inorder[i] >= inorder[i + 1]) {
				return false;
			}
		}
		return true;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna