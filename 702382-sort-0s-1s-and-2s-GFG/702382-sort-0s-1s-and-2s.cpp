class Solution {
	public:
	void sort012(vector<int>& arr) {
		// code here
		int n=arr.size();
		int zeros = 0, ones = 0, twos = 0;
		for (int i = 0; i<n; i++) {
			if (arr[i] == 0)zeros++;
			if (arr[i] == 1)ones++;
			if (arr[i] == 2)twos++;
		}
		int index = 0;
		while (zeros--) {
			arr[index++] = 0;
		}
		while (ones--) {
			arr[index++] = 1;
		}
		while (twos--) {
			arr[index++] = 2;
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna