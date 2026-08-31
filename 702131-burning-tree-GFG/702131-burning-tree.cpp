/* Structure of binary tree Node
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
	int height(Node *root) {
		if (root == NULL) {
			return 0;
		}
		return 1 + max(height(root->left), height(root->right));
	}
	int burn(Node* root, int target, int &time, int &hei) {
		// code here
		if (root == NULL) {
			return 0;
		}
		if (root->data == target) {
			hei = height(root) - 1;
			return - 1;
		}
		int l = burn(root->left, target, time, hei);
		int r = burn(root->right, target, time, hei);
		if (l<0) {
			time = max(time, r - l);
			return l - 1;
		}
		if (r<0) {
			time = max(time, l - r);
			return r - 1;
		}
		return 1 + max(l, r);
	}
	int minTime(Node* root, int target) {
		// code here
		int time = 0;
		int hei = 0;
		burn(root, target, time, hei);
		return max(time, hei);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna