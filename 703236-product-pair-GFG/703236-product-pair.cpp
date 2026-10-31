class Solution {
	public:
	bool isProduct(vector<int>& arr, long long target) {
		// code here
		sort(arr.begin(), arr.end());
		int n = arr.size();
		int start = 0, end = n - 1;
		while (start<end) {
			long long current_pdt = (long long)arr[start]*arr[end];
			if (current_pdt == target) {
				return true;
			}
			else if (current_pdt<target) {
				start++;
			}
			else {
				end--;
			}
		}
		return false;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna