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
	bool canRepresentBST(vector<int> &arr) {
		// code here
		int index = 0;
		BST(arr, index, INT_MIN, INT_MAX);
		if (index == arr.size()) {
			return true;
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna