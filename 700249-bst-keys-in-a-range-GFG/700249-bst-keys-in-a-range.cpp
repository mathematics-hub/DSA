/* Structure of tree Node
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
	void traverse(Node *root, int low, int high, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		traverse(root->left, low, high, ans);
		if (low<=root->data && root->data <= high) {
			ans.push_back(root->data);
		}
		traverse(root->right, low, high, ans);
	}
	vector<int> nodesInRange(Node *root, int low, int high) {
		// code here
		vector<int> ans;
		traverse(root, low, high, ans);
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna