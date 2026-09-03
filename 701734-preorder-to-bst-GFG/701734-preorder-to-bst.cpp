/* Structure of a Tree Node
class Node {
	public:
	int data;
	Node *left, *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	Node *BST(vector<int> &preorder, int &index, int lower, int upper) {
		if (index == preorder.size() || preorder[index]<lower || preorder[index]>upper) {
			return NULL;
		}
		Node *temp = new Node(preorder[index++]);
		temp->left = BST(preorder, index, lower, temp->data);
		temp->right = BST(preorder, index, temp->data, upper);
		return temp;
	}
	Node* preToBST(vector<int>& pre) {
		// code here
		int index = 0;
		return	BST(pre, index, INT_MIN, INT_MAX);
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna