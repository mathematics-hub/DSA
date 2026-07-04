class Solution {
	public:
	int reverseExponentiation(int n) {
		// code here
		int base = n;
		int index = 0;
		while (n != 0) {
			index = index*10 + (n%10);
			n = n/10;
		}
		int pdt = 1;
		for (int i = 1; i <= index; i++) {
			pdt = pdt*base;
		}
		return pdt;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna