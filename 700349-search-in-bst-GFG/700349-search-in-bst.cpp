/* Definition for Node
class Node {
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
	bool search(Node* root, int key) {
		// code here
		if (root == NULL) {
			return false;
		}
		if (root->data == key) {
			return true;
		}
		if (key<root->data) {
			return search(root->left, key);
		} else {
			return search(root->right, key);
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna