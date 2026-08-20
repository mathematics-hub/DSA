class Solution {
	public:
	int firstIndex(vector<int> &arr) {
		// code here
		int start = 0, end = arr.size() - 1;
		int index = -1;
		while (start <= end) {
			int mid = (start + end)/2;
			if (arr[mid] == 1) {
				index = mid;
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		return index;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna