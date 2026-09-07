/* Structure of tree node
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
	Node *BST(vector<int> &post, int &index, int minval, int maxval) {
		if (index == -1) {
			return NULL;
		}
		Node *temp = new Node(post[index--]);
		if (temp->data<post[index] && post[index]<maxval) {
			temp->right = BST(post, index, temp->data, maxval);
		}
		if (minval<post[index] && post[index]<temp->data) {
			temp->left = BST(post, index, minval, temp->data);
		}
		return temp;
	}
	Node* constructTree(vector<int>& post) {
		// code here
		int index = post.size() - 1, minval = INT_MIN, maxval = INT_MAX;
		return BST(post, index, minval, maxval);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna