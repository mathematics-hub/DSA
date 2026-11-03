class Solution {
	public:
	bool canSplit(vector<int>& arr) {
		// code here
		int n = arr.size();
		for (int i = 0; i<n-1; i++) {
			int sum1 = 0, sum2 = 0;
			for (int j = 0; j <= i; j++) {
				sum1 += arr[j];
			}
			for (int j = i + 1; j<n; j++) {
				sum2 += arr[j];
			}
			if (sum1 == sum2) {
				return true;
			}
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna