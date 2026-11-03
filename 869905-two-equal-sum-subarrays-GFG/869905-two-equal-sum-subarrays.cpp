class Solution {
	public:
	bool canSplit(vector<int>& arr) {
		int n = arr.size();
		int start = 0, end = n - 1;
		int sum1 = 0, sum2 = 0;
		while (start <= end) {
			if (sum1<sum2) {
				sum1 += arr[start];
				start++;
			}
			if (sum1>sum2) {
				sum2 += arr[end];
				end--;
			}
			if (start != end) {
				sum1 += arr[start];
				start++;
			}
			else {
				return true;
			}
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna