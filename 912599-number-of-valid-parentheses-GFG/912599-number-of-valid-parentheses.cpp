class Solution {
	public:
	int validprenthesis(int n, int l, int r) {
		if (n == l && n == r) {
			return 1;
		}
		int sum = 0;
		if (l<n) {
			sum += validprenthesis(n, l + 1, r);
		}
		if (r<l) {
			sum += validprenthesis(n, l, r + 1);
		}
		return sum;
	}
	int findWays(int n) {
		if (n%2 != 0) {
			return 0;
		}
		return validprenthesis(n/2, 0, 0);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna