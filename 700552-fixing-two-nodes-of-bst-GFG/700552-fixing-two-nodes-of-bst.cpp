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
	Node* correctBST(Node* root) {
		Node *first = NULL, *second = NULL;
		Node *prev = NULL, *curr = root;
		while (curr) {
			if (curr->left == NULL) {
				// get number
				if (prev != NULL && prev->data>curr->data) {
					if (first == NULL) {
						first = prev;
						second = curr;
					}
					else {
						second = curr;
					}
				}
				prev = curr;
				curr = curr->right;
			}
			else {
				Node *temp = curr->left;
				// move rightmost element of left element
				while (temp->right != NULL && temp->right != curr) {
					temp = temp->right;
				}
				if (temp->right == NULL) {
					temp->right = curr;
					curr = curr->left;
				}
				else {
					temp->right = NULL;
					// get element
					if (prev != NULL && prev->data>curr->data) {
						if (first == NULL) {
							first = prev;
							second = curr;
						}
						else {
							second = curr;
						}
					}
					prev = curr;
					curr = curr->right;
				}
			}
		}
		swap(first->data, second->data);
		return root;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna