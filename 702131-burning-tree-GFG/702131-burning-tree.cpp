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
	void path(Node *root, int target, bool &find, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		ans.push_back(root->data);
		if (root->data == target) {
			find = true;
			return;
		}
		path(root->left, target, find, ans);
		if (!find) {
			path(root->right, target, find, ans);
		}
		if (!find) {
			ans.pop_back();
		}
	}
	int height(Node *root)
	{
		if (root == nullptr)
			{
			return 0;
		}
		return 1 + max(height(root->left), height(root->right));
	}
	int minTime(Node* root, int target) {
		// code here
		bool find = false;
		vector<int> ans;
		path(root, target, find, ans);
		int n = ans.size();
		int maxtime = 0;
		int i = 0;
		while (i<n) {
			if (root->data == target) {
				maxtime = max(maxtime, height(root) - 1);
			}
			else if (root->left != NULL && root->left->data == ans[i + 1]) {
				maxtime = max(maxtime, height(root->right) + n - 1-i);
				root = root->left;
			}
			else {
				maxtime = max(maxtime, height(root->left) + n - 1-i);
				root = root->right;
			}
			i++;
		}
		return maxtime;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna