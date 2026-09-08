/* Structure of a Binary Search Tree node
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
	void inorder(Node *root, vector<int> &ans) {
		if (root == NULL) {
			return;
		}
		inorder(root->left, ans);
		ans.push_back(root->data);
		inorder(root->right, ans);
	}
	void fixing(Node *root, vector<int> &ans, int &index) {
		if (root == NULL) {
			return ;
		}
		fixing(root->left, ans, index);
		root->data = ans[index++];
		fixing(root->right, ans, index);
	}
	Node* correctBST(Node* root) {
		// code here
		vector<int> ans;
		inorder(root, ans);
		bool getans = false;
		int i = 0;
		while (ans[i]<ans[i + 1]) {
			i++;
		}
		int j = ans.size() - 1;
		while (ans[j - 1]<ans[j]) {
			j--;
		}
		swap(ans[i], ans[j]);
		int index = 0;
		fixing(root, ans, index);
		return root;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna