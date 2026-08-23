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
	int countNonLeafNodes(Node* root) {
		// Code here
		if (root == NULL) {
			return 0;
		}
		if (!root->left && !root->right) {
			return 0;
		}
		return countNonLeafNodes(root->left) + countNonLeafNodes(root->right) + 1;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna