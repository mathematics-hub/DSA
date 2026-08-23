/* Binary Tree Node Structure
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	void innernode(Node *root, int &count) {
		if (!root) {
			return;
		}
		if (root->left != NULL || root->right != NULL) {
			count++;
		}
		innernode(root->left, count);
		innernode(root->right, count);
	}
	int countNonLeafNodes(Node* root) {
		// Code here
		int count = 0;
		innernode(root, count);
		return count;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna