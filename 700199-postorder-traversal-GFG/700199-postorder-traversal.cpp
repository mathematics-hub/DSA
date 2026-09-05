/* Structure of Binary Tree Node
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
	void traverse(Node *root, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		traverse(root->left, ans);
		traverse(root->right, ans);
		ans.push_back(root->data);
	}
	vector<int> postOrder(Node* root) {
		// code here
		vector<int> ans;
		traverse(root, ans);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna