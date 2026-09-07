/* Structure of tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
}; */

class Solution {
	public:
	Node *BST(Node *root, int val) {
		if (root == NULL) {
			return new Node(val);
		}
		if (val<root->data) {
			root->left = BST(root->left, val);
		}
		else {
			root->right = BST(root->right, val);
		}
		return root;
	}
	Node* constructTree(vector<int>& post) {
		// code here
		Node *root = NULL;
		for (int i = post.size() - 1; i >= 0; i--) {
			root = BST(root, post[i]);
		}
		return root;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna