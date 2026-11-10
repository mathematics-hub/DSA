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
				int drow[4] = {-1, 1, 0, 0};
				int dcol[4] = {0, 0, -1, 1};
				for (int dir = 0; dir<4; dir++) {
					int nr = i + drow[dir];
					int nc = j + dcol[dir];
					if (nr>=0 && nr<row && nc>=0 && nc<col && mat[nr][nc] == 1) {
						mat[nr][nc] = 2;
						q.push({nr, nc});
					}
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