class Solution {
	public:
	void checkBST(vector<int> &arr, int &index, int minval, int maxval) {
		if (index == arr.size()) {
			return;
		}
		int val = arr[index++];
		if (arr[index]>minval && arr[index]<val) {
			checkBST(arr, index, minval, val);
		}
		if (val<arr[index] && arr[index]<maxval) {
			checkBST(arr, index, val, maxval);
		}
	}
	bool canRepresentBST(vector<int> &arr) {
		// code here
		int index = 0, minval = INT_MIN, maxval = INT_MAX;
		checkBST(arr, index, minval, maxval);
		if (index<arr.size()) {
			return false;
		}
		return true;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna