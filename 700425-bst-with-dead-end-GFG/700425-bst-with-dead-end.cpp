/* Tree Node structure
class Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x) {
		data = x;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	bool deadend(Node *root, int minval, int maxval) {
		if (root == NULL) {
			return true;
		}
		if (root->left == NULL && root->right == NULL) {
			if (root->data - minval == 1 && maxval - root->data == 1) {
				return false;
			}
			else {
				return true;
			}
		}
		int val = root->data;
		return	deadend(root->left, minval, val) && deadend(root->right, val, maxval);
	}
	bool isDeadEnd(Node *root) {
		// Code here
		return	!deadend(root, 0, 100000);
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna