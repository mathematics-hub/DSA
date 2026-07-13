class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		// code here
		int index = 0, i = 0, n = arr.size();
		while (i<n) {
			if (arr[index] != arr[i]) {
				arr[index + 1] = arr[i];
				index++;
			}
			i++;
		}
		arr.resize(index + 1);
		return arr;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna