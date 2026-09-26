/*
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = NULL;
	}
};
*/

class Solution {
	public:
	bool CBT(Node*root, int index, int totalnode) {
		if (root == NULL) {
			return true;
		}
		if (index >= totalnode) {
			return false;
		}
		return CBT(root->left, 2*index + 1, totalnode) && CBT(root->right, 2*index + 2, totalnode);
	}
	int totalNode(Node *root) {
		if (root == NULL) {
			return 0;
		}
		return 1 + totalNode(root->left) + totalNode(root->right);
	}
	bool maxHeap(Node *root) {
		if (root == NULL) {
			return true;
		}
		if (root->left != NULL && root->left->data>root->data) {
			return false;
		}
		if (root->right != NULL && root->right->data>root->data) {
			return false;
		}
		return maxHeap(root->left) && maxHeap(root->right);
	}
	bool isHeap(Node* root) {
		// code here
		int num = totalNode(root);
		bool ans = CBT(root, 0, num);
		if (ans == false) {
			return 0;
		}
		return maxHeap(root);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna