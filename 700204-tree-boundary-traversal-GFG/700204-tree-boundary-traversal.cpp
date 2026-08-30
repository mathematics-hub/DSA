/* Node Structure
class Node {
	public:
	int data;
	Node* left, *right;
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	void leftboundary(Node *root, vector<int> &ans) {
		if (!root || (!root->left && !root->right)) {
			return;
		}
		ans.push_back(root->data);
		if (root->left)
			leftboundary(root->left, ans);
		else
			leftboundary(root->right, ans);
	}
	void leafboundary(Node *root, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		if (root->left == NULL && root->right == NULL) {
			ans.push_back(root->data);
		}
		leafboundary(root->left, ans);
		leafboundary(root->right, ans);
	}
	void rightboundary(Node *root, vector<int> &ans) {
		if (!root || (!root->left && !root->right)) {
			return;
		}
		if (root->right)
			rightboundary(root->right, ans);
		else
			rightboundary(root->left, ans);
		ans.push_back(root->data);
	}
	vector<int> boundaryTraversal(Node *root) {
		// code here
		if (root->left == NULL && root->right == NULL) {
			return {root->data};
		}
		vector<int> ans;
		ans.push_back(root->data);
		leftboundary(root->left, ans);
		leafboundary(root, ans);
		rightboundary(root->right, ans);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna