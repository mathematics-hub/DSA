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
	bool BST(Node* root, int& prev) {
		if (root == NULL) {
			return true;
		}
		bool left = BST(root->left, prev);
		if (left == false) {
			return false;
		}
		if (prev >= root->data) {
			return false;
		}
		prev = root->data;
		return BST(root->right, prev);
	}
	bool isBST(Node* root) {
		// code here
		int prevnode = INT_MIN; ;
		return BST(root, prevnode);
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna