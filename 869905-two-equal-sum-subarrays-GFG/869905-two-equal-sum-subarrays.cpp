class Solution {
	public:
	bool canSplit(vector<int>& arr) {
		int n = arr.size();
		int start = -1, end = n;
		int sum1 = 0, sum2 = 0;
		while (start <= end) {
			if (sum1 <= sum2) {
				start++;
				sum1 += arr[start];
			}
			else {
				end--;
				sum2 += arr[end];
			}
			if (start == end && sum1 == sum2) {
				return true;
			}
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna