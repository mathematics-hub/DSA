class Solution {
	public:
	int heapHeight(int n, int arr[]) {
		// code here
		if (n == 1) {
			return 1;
		}
		int count = 0;
		int index = 0;
		while (index<n) {
			count++;
			index = 2 * index + 1;
		}
		return count - 1;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna