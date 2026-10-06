class Solution {
	public:
	bool subArrayExists(vector<int>& arr) {
		// code here
		unordered_map<int, int> mp;
		int prefixSum = 0;
		mp[0] = 1;
		for (int i = 0; i<arr.size(); i++) {
			prefixSum += arr[i];
			if (mp.find(prefixSum) != mp.end()) {
				return true;
			}
			else {
				mp[prefixSum] = 1;
			}
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna