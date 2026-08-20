// Back-end complete function Template for C++

class Solution {
	public:
	int countZeros(vector<vector<int>> & mat) {
		// code here
		int n = mat.size();
		int totalzero = 0;
		for (int i = 0; i<n; i++) {
			int start = 0, end = n - 1;
			int index = -1;
			while (start <= end) {
				int mid = (start + end)/2;
				if (mat[i][mid] == 0) {
					index = mid;
					start = mid + 1;
				}
				else {
					end = mid - 1;
				}
			}
			totalzero += (index+1);
		}
		return totalzero;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna