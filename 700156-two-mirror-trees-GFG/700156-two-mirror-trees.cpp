/* Tree Node Structure
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	bool areMirror(Node* a, Node* b) {
		// code here
		if (a == NULL && b == NULL) {
			return true;
		}
		if (a == NULL && b != NULL || a != NULL && b == NULL || a->data != b->data) {
			return false;
		}
		return areMirror(a->left, b->right) && areMirror(a->right, b->left);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna