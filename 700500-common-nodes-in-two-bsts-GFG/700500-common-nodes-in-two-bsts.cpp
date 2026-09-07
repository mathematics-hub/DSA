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
	vector<int> findCommon(Node* r1, Node* r2) {
		// code here
		vector<int> v1, v2;
		inorder(r1, v1);
		inorder(r2, v2);
		vector<int> result;
		int i = 0, j = 0;
		while (i<v1.size() && j<v2.size()) {
			if (v1[i]<v2[j]) {
				i++;
			}
			else if (v1[i]>v2[j]) {
				j++;
			}
			else {
				result.push_back(v1[i]);
				i++; j++;
			}
		}
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna