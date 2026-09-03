/*
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
	Node *arrayToBST(vector<int> &arr, int start, int end) {
		if (start>end) {
			return NULL;
		}
		int mid = (start + end)/2;
		Node *temp = new Node(arr[mid]);
		temp->left = arrayToBST(arr, start, mid - 1);
		temp->right = arrayToBST(arr, mid + 1, end);
		return temp;
	}
	Node* sortedArrayToBST(vector<int>& arr) {
		// code here
		int start = 0, end = arr.size() - 1;
		return arrayToBST(arr, start, end);
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna