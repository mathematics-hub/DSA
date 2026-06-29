class Solution {
	public:
	void subset_sum(vector<int>&nums, int index, int sum, vector<int> &result) {
		if (index == -1) {
			result.push_back(sum);
			return;
		}
		subset_sum(nums, index - 1, sum, result);
		subset_sum(nums, index - 1, sum + nums[index], result);
	}
	vector<int> subsetSums(vector<int>& arr) {
		// code here
		vector<int> result;
		subset_sum(arr, arr.size() - 1, 0, result);
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna