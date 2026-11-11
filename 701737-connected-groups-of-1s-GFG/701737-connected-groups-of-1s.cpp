class Solution {
	public:
	void setOfOneByi_j(vector<vector<int>> &grid, int i, int j) {
		queue<pair<int, int>> q;
		q.push({i, j});
		grid[i][j] = 0;
		while (!q.empty()) {
			int r = q.front().first;
			int c = q.front().second;
			q.pop();
			int row[] = {-1, 1, 0, 0};
			int col[] = {0, 0, -1, 1};
			for (int k = 0; k<4; k++) {
				int nr = r + row[k];
				int nc = c + col[k];
				if (nr >= 0 && nr<grid.size() && nc >= 0 && nc<grid[0].size() && grid[nr][nc] == 1) {
					q.push({nr, nc});
					grid[nr][nc] = 0;
				}
			}
		}
	}
	int countGroups(vector<vector<int>> & grid) {
		int row = grid.size();
		int col = grid[0].size();
		int count = 0;
		for (int i = 0; i<row; i++) {
			for (int j = 0; j<col; j++) {
				if (grid[i][j] == 1) {
					setOfOneByi_j(grid, i, j);
					count++;
				}
			}
		}
		return count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna