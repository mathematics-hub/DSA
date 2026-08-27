/*
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};
*/

class Solution {
	public:
	void position(Node *root, int curr, int &l, int &r) {
		if (root == NULL) {
			return ;
		}
		l = min(l, curr);
		r = max(r, curr);
		position(root->left, curr - 1, l, r);
		position(root->right, curr + 1, l, r);
	}
	void topViewOfTree(Node *root, int level, int index, vector<int> &lev, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		if (lev[index] >level) {
			lev[index] = level;
			ans[index] = root->data;
		}
		topViewOfTree(root->left, level + 1, index - 1, lev, ans);
		topViewOfTree(root->right, level + 1, index + 1, lev, ans);
	}
	vector<int> topView(Node *root) {
		// code here
		int curr = 0, l = 0, r = 0;
		position(root, curr, l, r);
		vector<int> ans(r - l + 1);
		vector<int> lev(r - l + 1, INT_MAX);
		int index = -l, level = 0;
		topViewOfTree(root, level, index, lev, ans);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna