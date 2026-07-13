class Solution {
	public:
	int findMissing(vector<int> &arr) {
		// code here
		int n = arr.size();
		int actual_sum;
		if (n%2 == 0) {
			actual_sum = (n + 1) * ((arr[0] + arr[n - 1]) / 2);
		}
		else {
			actual_sum = ((n + 1)/2) * (arr[0] + arr[n - 1]);
		}
		int total_sum = arr[0];
		bool flag = true;
		for (int i = 1; i<n - 1; i++) {
			if (arr[i]-arr[i - 1] != arr[i + 1]-arr[i]) {
				flag = false;
			}
			total_sum += arr[i];
		}
		total_sum += arr[n - 1];
		if (flag == false) {
			return actual_sum - total_sum;
		}
		return arr[n - 1]+(arr[n - 1]-arr[n - 2]);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna