/* Structure of a Binary Search Tree node
class Node {
	public:
	int data;
	Node *left, *right;
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	struct result {
		bool isBst;
		int size;
		int minval;
		int maxval;
	};
	result find(Node *root) {
		if (root == NULL) {
			return {true, 0, INT_MAX, INT_MIN};
		}
		result lchild = find(root->left);
		result rchild = find(root->right);
		if (lchild.isBst && rchild.isBst && lchild.maxval<root->data && root->data<rchild.minval) {
			return {true, lchild.size + rchild.size + 1, min(root->data, lchild.minval), max(root->data, rchild.maxval)};
		}
		return {false, max(lchild.size, rchild.size), max(root->data, lchild.maxval), min(root->data, rchild.minval)};
	}
	int largestBst(Node *root) {
		// code here
		result x = find(root);
		return x.size;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna