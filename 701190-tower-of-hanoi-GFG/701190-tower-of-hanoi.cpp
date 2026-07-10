class Solution {
	public:
	int towerOfHanoi(int n, int from, int to, int aux) {
		// code here
		if (n == 0)return 0;
		return towerOfHanoi(n - 1, from, aux, to) + 1+ towerOfHanoi(n - 1, aux, to, from);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna