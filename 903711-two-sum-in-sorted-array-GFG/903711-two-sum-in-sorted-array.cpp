class Solution {
	public:
	vector<int> twoSum(vector<int>& arr, int target) {
		// code here
		int start = 0, end = arr.size() - 1;
		while (start<end) {
			if (arr[start]+arr[end] == target) {
				return {start + 1, end + 1};
			}
			else if (arr[start]+arr[end]<target) {
				start++;
			}
			else {
				end--;
			}
		}
		return {-1, -1};
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna