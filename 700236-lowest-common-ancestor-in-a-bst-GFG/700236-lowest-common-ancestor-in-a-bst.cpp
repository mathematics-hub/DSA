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
};
*/

class Solution {
	public:
	Node* findLCA(Node* root, Node* p, Node* q) {
		// code here
		if (root == NULL) {
			return NULL;
		}
		if (p->data < root->data && q->data < root->data) {
			return findLCA(root->left, p, q);
		}
		if (p->data > root->data && q->data > root->data) {
			return findLCA(root->right, p, q);
		}
		return root;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna