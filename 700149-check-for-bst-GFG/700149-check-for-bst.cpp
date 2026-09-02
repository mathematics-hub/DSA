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
	bool isBST(Node* root) {
		// code here
		int prevnode;
		int currnode = INT_MIN;
		while (root) {
			if (root->left == NULL) {
				prevnode = currnode;
				currnode = root->data;
				if (currnode <= prevnode) {
					return false;
				}
				root = root->right;
			}
			else {
				Node *curr = root->left;
				while (curr->right != NULL && curr->right != root) {
					curr = curr->right;
				}
				if (curr->right == NULL) {
					curr->right = root;
					root = root->left;
				}
				else {
					curr->right = NULL;
					prevnode = currnode;
					currnode = root->data;
					if (currnode <= prevnode) {
						return false;
					}
					root = root->right;
				}
			}
		}
		return true;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna