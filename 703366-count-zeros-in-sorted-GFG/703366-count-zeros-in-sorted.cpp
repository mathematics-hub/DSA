class Solution {
	public:
	int countZeroes(vector<int> &arr) {
		// code here
		int count = 0;
		for (int i = arr.size() - 1; i >= 0; i--) {
			if (arr[i] == 0) {
				count++;
			}
			else
				{
				break;
			}
		}
		return count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna