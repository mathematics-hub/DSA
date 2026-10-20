class Solution {
	public:
	int cubeRoot(int n) {
		// code here
		int start = 1, end = n, mid, ans;
		while (start <= end) {
			mid = (start + end)/2;
			if (mid*mid == n/mid) {
				return mid;
			}
			else if (mid*mid>n/mid) {
				end = mid - 1;
			}
			else {
				ans = mid;
				start = mid + 1;
			}
		}
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna