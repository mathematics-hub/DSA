class Solution {
	public:
	vector<int> leaders(vector<int>& arr) {
		// code here
		vector<int> result;
		int leftMaxElement = INT_MIN;
		for (int i = arr.size()-1; i >= 0; i--) {
			if (arr[i]>=leftMaxElement) {
				result.push_back(arr[i]);
				leftMaxElement = arr[i];
			}
		}
		reverse(result.begin(), result.end());
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna