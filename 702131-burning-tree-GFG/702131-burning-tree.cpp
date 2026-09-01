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
	int height(Node *root) {
		if (root == NULL) {
			return 0;
		}
		return 1 + max(height(root->left), height(root->right));
	}
	bool findpath(Node *root, int target, vector<int> &path) {
		if (root == NULL) {
			return false;
		}
		path.push_back(root->data);
		if (root->data == target) {
			return true;
		}
		if (findpath(root->left, target, path) || findpath(root->right, target, path)) {
			return true;
		}
		path.pop_back();
		return false;
	}
	int minTime(Node* root, int target) {
		// code here
		vector<int> path;
		findpath(root, target, path);
		int n = path.size();
		int maxtime = INT_MIN;
		for (int i = 0; i<n; i++) {
			if (root->data == target) {
				maxtime = max(maxtime, height(root) - 1);
			}
			else if (root->left != NULL && root->left->data == path[i + 1]) {
				maxtime = max(maxtime, height(root->right) + n - 1-i);
				root = root->left;
			}
			else {
				maxtime = max(maxtime, height(root->left) + n - 1-i);
				root = root->right;
			}
		}
		return maxtime;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna