class Solution {
	public:
	vector<int> twoRepeated(vector<int>& arr) {
		// code here
		int n = arr.size();
		vector<int> ans;
		vector<int> freq(n - 1, 0);
		for (int i = 0; i<n; i++) {
			freq[arr[i]-1]++;
			if (freq[arr[i]-1] == 2) {
				ans.push_back(arr[i]);
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna