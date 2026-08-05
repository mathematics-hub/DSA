class Solution {
	public:
	int countAtMost(vector<int> &arr, int k) {
		int count = 0;
		int size = arr.size();
		int left = 0;
		int sum = 0;
		for (int right = 0; right<size; right++) {
			sum += arr[right];
			while (sum>k) {
				sum -= arr[left];
				left++;
			}
			count += (right - left + 1);
		}
		return count;
	}
	int countSubarray(vector<int>& arr, int l, int r) {
		// code here
		return countAtMost(arr, r) - countAtMost(arr, l - 1);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna