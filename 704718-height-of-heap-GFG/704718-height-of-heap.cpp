class Solution {
	public:
	int heapHeight(int n, int arr[]) {
		// code here
		if (n == 1) {
			return 1;
		}
		int i = 0, count = 0;
		while (i<n) {
			count++;
			i = 2*i + 1;
		}
		return count - 1;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna