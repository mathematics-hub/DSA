/* Definition of Tree Node
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	void traverse(Node *root, vector<int> &ans) {
		if (root == NULL) {
			return ;
		}
		if (root->left == NULL && root->right != NULL) {
			ans.push_back(root->right->data);
		}
		if (root->left != NULL && root->right == NULL) {
			ans.push_back(root->left->data);
		}
		traverse(root->left, ans);
		traverse(root->right, ans);
	}
	vector<int> noSibling(Node* root) {
		// code here
		vector<int> ans;
		traverse(root, ans);
		sort(ans.begin(), ans.end());
		if (ans.empty()) {
			return {-1};
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna