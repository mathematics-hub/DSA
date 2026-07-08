class Solution {
	public:
	bool isPowerOf3(int n) {
		// code here
		while (n != 1) {
			if (n%3 != 0) {
				return false;
			}
			n = n/3;
		}
		return true;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna