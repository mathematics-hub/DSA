class Solution {
	public:
	vector<int> findDuplicates(vector<int>& arr) {
		int n = arr.size();
		vector<int> count(n, 0);
		for (int i = 0; i<n; i++) {
			count[arr[i]-1]++;
		}
		vector<int> result;
		for (int i = 0; i<n; i++) {
			if (count[i] == 2) {
				result.push_back(i+1);
			}
		}
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna