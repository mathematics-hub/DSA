class Solution {
	public:
	int nCr(int n, int r) {
		// code here
		if (r>n) {
			return 0;
		}
		r = min(n - r, r);
		long long ans = 1;
		for (int i = 1; i <= r; i++) {
			ans = ans*(n - r + i)/i;
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna