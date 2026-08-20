class Solution {
	public:
	int firstIndex(vector<int> &arr) {
		// code here
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] == 1) {
				return i;
			}
		}
		return - 1;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna