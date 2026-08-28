/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	void width(Node *root, int pos, int &l, int &r) {
		if (root == NULL) {
			return ;
		}
		l = min(l, pos);
		r = max(r, pos);
		width(root->left, pos - 1, l, r);
		width(root->right, pos + 1, l, r);
	}
	void Bview(Node *root, int index, int lev, vector<int> &ans, vector<int> &level) {
		if (root == NULL) {
			return;
		}
		if (level[index]<=lev) {
			ans[index] = root->data;
			level[index] = lev;
		}
		Bview(root->left, index - 1, lev+1, ans, level);
		Bview(root->right, index + 1, lev+1, ans, level);
	}
	vector<int> bottomView(Node *root) {
		// code here
		int pos = 0, l = 0, r = 0;
		width(root, pos, l, r);
		vector<int> ans(r - l + 1);
		vector<int> level(r - l + 1, INT_MIN);
		int index = -l;
		int lev = 0;
		Bview(root, index, lev, ans, level);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna