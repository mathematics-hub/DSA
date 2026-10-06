class Solution {
	public:
	int findSubarray(vector<int> &arr) {
		// code here
		int totalSubarray = 0;
		
		int prefixSum = 0;
		unordered_map<int, int> mp;
		mp.insert({0, 1});
		
		for (int i = 0; i<arr.size(); i++) {
			prefixSum += arr[i];
			if (mp.find(prefixSum) != mp.end()) {
				totalSubarray += mp[prefixSum];
				mp[prefixSum]++;
			}
			else {
				mp[prefixSum] = 1;
			}
		}
		return totalSubarray;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna