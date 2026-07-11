class Solution {
	public:
	void pushZerosToEnd(vector<int>& arr) {
		// code here
		int n = arr.size();
		int left = 0, right = 0;
		while (right<n) {
			if (arr[left] == 0 && arr[right] == 0) {
				right++;
			}
			else if (arr[left] == 0 && arr[right] != 0) {
				swap(arr[left], arr[right]);
				left++;
				right++;
			}
			else if (arr[left] != 0 && arr[right] == 0) {
				left++;
			}
			else {
				left++;
				right++;
			}
		}
		return;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna