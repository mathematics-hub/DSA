class Solution {
	public:
	void sortInWave(vector<int>& arr) {
		// code here
		for (int i = 0; i<arr.size() - 1; i += 2) {
			swap(arr[i], arr[i + 1]);
		}
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna