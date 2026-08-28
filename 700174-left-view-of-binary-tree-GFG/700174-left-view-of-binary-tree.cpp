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
	int totalNoOfLevel(Node *root) {
		if (root == NULL) {
			return 0;
		}
		return 1 + max(totalNoOfLevel(root->left), totalNoOfLevel(root->right));
	}
	void Lview(Node *root, int level, vector<bool> &track, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		if (track[level] == false) {
			ans[level] = root->data;
			track[level] = true;
		}
		Lview(root->left, level + 1, track, ans);
		Lview(root->right, level + 1, track, ans);
	}
	vector<int> leftView(Node *root) {
		// code here
		int lev = totalNoOfLevel(root);
		vector<bool> track(lev, false);
		vector<int> ans(lev);
		int level = 0;
		Lview(root, level, track, ans);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna