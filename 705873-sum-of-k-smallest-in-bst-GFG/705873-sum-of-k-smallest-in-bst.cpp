/* Structure of a Tree Node
class Node {
	int data;
	Node* right;
	Node* left;
	Node(int x) {
		data = x;
		right = nullptr;
		left = nullptr;
	}
}; */

class Solution {
	public:
	void traverse(Node *root, int &k, int &sum) {
		if (root == NULL) {
			return ;
		}
		traverse(root->left, k, sum);
		if (k>0) {
			sum += root->data;
		}
		k--;
		if (k <= 0) {
			return ;
		}
		traverse(root->right, k, sum);
	}
	int sum(Node* root, int k) {
		// code here
		int sum = 0;
		traverse(root, k, sum);
		return sum;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna