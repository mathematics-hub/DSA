class Solution {
	public:
	int celebrity(vector<vector<int>> & mat) {
		// code here
		for (int col = 0; col<mat[0].size(); col++) {
			// every one know
			bool flag = true;
			for (int row = 0; row<mat.size(); row++) {
				if (mat[row][col] == 0) {
					flag = false;
					break;
				}
			}
			if (flag == false) {
				continue;
			}
			for (int row = 0; row<mat.size(); row++) {
				if (row != col && mat[col][row] == 1) {
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