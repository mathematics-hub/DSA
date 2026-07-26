class Solution {
	public:
	int maxSubarraySum(vector<int> &arr) {
		// Code here
		int n = arr.size();
		int currentSum = 0, max_sum = INT_MIN;
		for (int i = 0; i<n; i++) {
			currentSum += arr[i];
			max_sum = max(max_sum, currentSum);
			if (currentSum<0) {
				currentSum = 0;
			}
		}
		return max_sum;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna