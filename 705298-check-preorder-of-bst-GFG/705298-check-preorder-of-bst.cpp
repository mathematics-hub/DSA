class Node {
	public:
	int data;
	Node *left, *right;
	Node(int value) {
		data = value;
		left = right = NULL;
	}
};
class Solution {
	public:
	Node * BST(vector<int> &arr, int &index, int lower, int upper) {
		if (index == arr.size() || arr[index]>upper || arr[index]<lower) {
			return NULL;
		}
		Node *temp = new Node(arr[index++]);
		temp->left = BST(arr, index, lower, temp->data);
		temp->right = BST(arr, index, temp->data, upper);
		return temp;
	}
	bool check(Node *root, vector<int> &arr, int &index) {
		if (root == NULL) {
			return true;
		}
		if (root->data != arr[index++]) {
			return false;
		}
		return check(root->left, arr, index) && check(root->right, arr, index);
	}
	bool canRepresentBST(vector<int> &arr) {
		// code here
		int index = 0;
		Node *root = BST(arr, index, INT_MIN, INT_MAX);
		if (index != arr.size()) {
			return false;
		}
		index = 0;
		return check(root, arr, index);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna