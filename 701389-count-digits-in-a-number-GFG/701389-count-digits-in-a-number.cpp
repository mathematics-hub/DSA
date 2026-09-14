class Solution {
	public:
	int countDigits(int n) {
		// Code here
		int count = 0;
		while (n) {
			count++;
			n = n/10;
		}
		return count;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna