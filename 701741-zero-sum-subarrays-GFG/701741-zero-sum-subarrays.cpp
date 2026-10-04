class Solution {
	public:
	int findSubarray(vector<int> &arr) {
		// code here
		int totalSubarray = 0;
		
		int prefixSum = 0;
		unordered_map<int, int> m;
		m[0] = 1;
		
		for (int i = 0; i<arr.size(); i++) {
			prefixSum += arr[i];
			if (m.find(prefixSum) != m.end()) {
				totalSubarray += m[prefixSum];
				m[prefixSum]++;
			}
			else {
				m[prefixSum] = 1;
			}
		}
		return totalSubarray;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna