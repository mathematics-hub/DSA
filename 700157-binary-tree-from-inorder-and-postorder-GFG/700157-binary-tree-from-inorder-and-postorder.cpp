/* Structure of binary tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	Node(int x) {
		data = x;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	int find(vector<int> inorder, int target, int s, int e) {
		for (int i = e; i >= s; i--) {
			if (inorder[i] == target) {
				return i;
			}
		}
		return - 1;
	}
	Node *tree(vector<int> &inorder, vector<int> &postorder, int index, int instart, int inend) {
		if (instart>inend) {
			return NULL;
		}
		Node *temp = new Node(postorder[index]);
		int pos = find(inorder, postorder[index], instart, inend);
		temp->left = tree(inorder, postorder, index - (inend - pos) - 1, instart, pos - 1);
		temp->right = tree(inorder, postorder, index - 1, pos + 1, inend);
		return temp;
	}
	Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
		// code here
		int index = postorder.size() - 1;
		int instart = 0;
		int inend = inorder.size() - 1;
		return tree(inorder, postorder, index, instart, inend);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna