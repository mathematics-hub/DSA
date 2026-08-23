/* Node Structure
class Node {
	public:
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	int getSize(Node* root) {
		// code here
		if (!root) {
			return 0;
		}
		return getSize(root->left) + getSize(root->right) + 1;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna