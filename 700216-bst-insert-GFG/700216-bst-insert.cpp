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
	Node* insert(Node* root, int key) {
		// code  here
		if (root == NULL) {
			return new Node(key);
		}
		if (key<root->data) {
			root->left = insert(root->left, key);
		}
		if (key>root->data) {
			root->right = insert(root->right, key);
		}
		return root;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna