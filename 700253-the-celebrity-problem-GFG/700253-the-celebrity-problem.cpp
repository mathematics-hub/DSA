class Solution {
	public:
	int celebrity(vector<vector<int>> & mat) {
		// code here
		int n = mat.size();
		for (int col = 0; col<n; col++) {// check every column
			// every one know him
			bool flag = true;
			for (int row = 0; row<n; row++) {// check every row
				if (mat[row][col] == 0) {
					flag = false;
					break;
				}
			}
			if (flag == false) {
				continue;
			}
			// check col no row
			// where every body unknown
			for (int j = 0; j<n; j++) {
				if (j != col && mat[col][j] == 1) {
					flag = false;
					break;
				}
			}
			if (flag) {
				return col;
			}
		}
		return - 1;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna