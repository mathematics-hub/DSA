class Solution {
	public:
	long long pairAndSum(vector<int> &arr) {
		// code here
		long long sum = 0;
		for (int k = 0; k<32; k++) {
			long long count = 0;
			for (int val:arr) {
				if (val&(1 << k)) {
					count++;
				}
			}
			long long pairs = count*(count - 1)/2;
			sum += pairs*(1 << k);
		}
		return sum;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna