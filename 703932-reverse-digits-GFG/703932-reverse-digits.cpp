class Solution {
	public:
	int reverseDigits(int n) {
		// Code here
		int reverse = 0;
		while (n) {
			int lastDigit = n%10;
			reverse = reverse*10 + lastDigit;
			n /= 10;
		}
		return reverse;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna