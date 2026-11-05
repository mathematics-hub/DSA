class Solution {
	public:
	vector<vector<int>> getSubArrays(vector<int>& arr) {
		// code here
		int n=arr.size();
		vector<vector<int>> result;
		for (int start = 0; start<n; start++) {
			for (int end = start; end<n; end++) {
				vector<int> subarray;
				for (int i = start; i <= end; i++) {
					subarray.push_back(arr[i]);
				}
				result.push_back(subarray);
			}
		}
		return result;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna