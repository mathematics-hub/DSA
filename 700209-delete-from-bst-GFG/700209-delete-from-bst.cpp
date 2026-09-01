/* Structure of a Binary Search Tree node
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
}; */

class Solution {
	public:
	Node* delNode(Node* root, int target) {
		// code here
		if (root == NULL) {
			return NULL;
		}
		if (target<root->data) {
			root->left = delNode(root->left, target);
			return root;
		}
		else if (target>root->data) {
			root->right = delNode(root->right, target);
			return root;
		}
		else {
			if (!root->left && !root->right) {
				delete root;
				return NULL;
			}
			else if (root->right == NULL) {
				Node *temp = root->left;
				delete root;
				return temp;
			}
			else if (root->left == NULL) {
				Node *temp = root->right;
				delete root;
				return temp;
			}
			else {
				Node *child = root->left;
				Node *parent = root;
				while (child->right != NULL) {
					parent = child;
					child = child->right;
				}
				if (parent == root) {
					child->right = root->right;
					delete root;
					return child;
				} else {
					parent->right = child->left;
					child->left = root->left;
					child->right = root->right;
					delete root;
					return child;
				}
			}
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna