class Solution {
	public:
	int orangesRot(vector<vector<int>> & mat) {
		// code here
		int row = mat.size();
		int col = mat[0].size();
		queue<pair<int, int>> q;
		for (int i = 0; i<row; i++) {
			for (int j = 0; j<col; j++) {
				if (mat[i][j] == 2) {
					q.push({i, j});
				}
			}
		}
		int totaltime = 0;
		while (!q.empty()) {
			int size = q.size();
			totaltime++;
			for (int k = 0; k<size; k++)
				{
				int i = q.front().first;
				int j = q.front().second;
				q.pop();
				if (j>0 and mat[i][j - 1] == 1) {
					mat[i][j - 1] = 2;
					q.push({i, j - 1});
				}
				if (j<col - 1 and mat[i][j + 1] == 1) {
					mat[i][j + 1] = 2;
					q.push({i, j + 1});
				}
				if (i>0 and mat[i - 1][j] == 1) {
					mat[i - 1][j] = 2;
					q.push({i - 1, j});
				}
				if (i<row - 1 and mat[i + 1][j] == 1) {
					mat[i + 1][j] = 2;
					q.push({i + 1, j});
				}
			}
		}
		for (int i = 0; i<row; i++) {
			for (int j = 0; j<col; j++) {
				if (mat[i][j] == 1) {
					return - 1;
				}
			}
		}
		return totaltime == 0?0:totaltime - 1;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna