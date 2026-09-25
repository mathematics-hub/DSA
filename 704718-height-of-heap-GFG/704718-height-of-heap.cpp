class Solution {
	public:
	int heapHeight(int n, int arr[]) {
		// code here
		if (n == 1) {
			return 1;
		}
		return log2(n);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna