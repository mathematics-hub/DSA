/* Structure of a Binary Tree Node
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
	void largest(Node *root, int &k, int &ans) {
		if (root == NULL) {
			return ;
		}
		largest(root->right, k, ans);
		k--;
		if (k == 0) {
			ans = root->data;
			return ;
		}
		if (k<0) {
			return;
		}
		largest(root->left, k, ans);
	}
	int kthLargest(Node *root, int k) {
		// code here
		int ans = 0;
		largest(root, k, ans);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna