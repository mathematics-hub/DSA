class Solution {
	public:
	int findUnique(int k, vector<int>& arr) {
		// code here
		int n = arr.size();
		sort(arr.begin(), arr.end());
		if (arr[0] != arr[1]) {
			return arr[0];
		}
		for (int i = 1; i<n - 1; i++) {
			if (arr[i - 1]<arr[i] && arr[i]<arr[i + 1]) {
				return arr[i];
			}
		}
		if (arr[n - 2] != arr[n - 1]) {
			return arr[n - 1];
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna