class Solution {
	public:
	int findEquilibrium(vector<int> &arr) {
		// code here
		int n=arr.size();
		int leftSum = arr[0], rightSum = 0;
		for (int i = 2; i<n; i++) {
			rightSum += arr[i];
		}
		for (int i = 1; i<n - 1; i++) {
			if (leftSum == rightSum) {
				return i;
			}
			else {
				leftSum += arr[i];
				rightSum -= arr[i + 1];
			}
		}
		return - 1;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna