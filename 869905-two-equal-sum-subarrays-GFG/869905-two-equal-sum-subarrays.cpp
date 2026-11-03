class Solution {
	public:
	bool canSplit(vector<int>& arr) {
		int n = arr.size();
		int totalSum = 0;
		for (int i = 0; i<n; i++) {
			totalSum += arr[i];
		}
		int prefix = 0;
		for (int i = 0; i<n - 1; i++) {
			prefix += arr[i];
			int suffix = totalSum - prefix;
			if (prefix == suffix) {
				return true;
			}
		}
		return false;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna