/* Definition for Node
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
	void allpath(Node *root, vector<int> singlepath, vector<vector<int>> &ans) {
		if (root == NULL) {
			return;
		}
		singlepath.push_back(root->data);
		if (!root->left && !root->right) {
			ans.push_back(singlepath);
		}
		allpath(root->left, singlepath, ans);
		allpath(root->right, singlepath, ans);
		singlepath.pop_back();
	}
	vector<vector<int>> paths(Node* root) {
		// code here
		vector<int> singlepath;
		vector<vector<int>> ans;
		allpath(root, singlepath, ans);
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna