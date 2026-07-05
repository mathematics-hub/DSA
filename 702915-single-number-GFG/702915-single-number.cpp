class Solution {
	public:
	int getSingle(vector<int>& arr) {
		// code here
		sort(arr.begin(), arr.end());
		int n = arr.size();
		if (n == 1) {
			return arr[0];
		}
		for (int i = 0; i<n - 1; i += 2) {
			if (arr[i] != arr[i + 1]) {
				return arr[i];
			}
		}
		return arr[n - 1];
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna