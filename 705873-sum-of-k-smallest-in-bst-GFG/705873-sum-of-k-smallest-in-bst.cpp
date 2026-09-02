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
	void traverse(Node *root, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		traverse(root->left, ans);
		ans.push_back(root->data);
		traverse(root->right, ans);
	}
	int sum(Node* root, int k) {
		// code here
		vector<int> ans;
		traverse(root, ans);
		int sum = 0;
		for (int i = 0; i < k; i++) {
			sum += ans[i];
		}
		return sum;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna