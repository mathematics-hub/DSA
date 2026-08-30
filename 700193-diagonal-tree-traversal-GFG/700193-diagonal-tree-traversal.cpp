/* A binary tree node
struct Node
{
	int data;
	Node* left, * right;
}; */

class Solution {
	public:
	void noOfDiagonal(Node *root, int pos, int &maxdiagonal) {
		if (root == NULL) {
			return ;
		}
		maxdiagonal = max(maxdiagonal, pos);
		noOfDiagonal(root->left, pos + 1, maxdiagonal);
		noOfDiagonal(root->right, pos, maxdiagonal);
	}
	void diagonaltraversal(Node *root, int i, vector<vector<int>> &ans) {
		if (root == NULL) {
			return;
		}
		ans[i].push_back(root->data);
		diagonaltraversal(root->left, i + 1, ans);
		diagonaltraversal(root->right, i, ans);
	}
	vector<int> diagonal(Node *root) {
		// code here
		int l = 0;
		noOfDiagonal(root, 0, l);
		vector<vector<int>> ans(l + 1);
		diagonaltraversal(root, 0, ans);
		vector<int> result;
		for (int i = 0; i<ans.size(); i++) {
			for (int j = 0; j<ans[i].size(); j++) {
				result.push_back(ans[i][j]);
			}
		}
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna