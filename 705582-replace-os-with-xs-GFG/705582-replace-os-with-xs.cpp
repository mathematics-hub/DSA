class Solution {
	public:
	bool DFS(vector<vector<char>> &grid, int i, int j) {
		grid[i][j] = '#';
		int row[] = {-1, 1, 0, 0};
		int col[] = {0, 0, -1, 1};
		for (int k = 0; k < 4; k++) {
			int nr = i + row[k];
			int nc = j + col[k];
			if (nr >= 0 && nr < grid.size() && nc >= 0 &&
			nc < grid[0].size() && grid[nr][nc] == 'O') {
				DFS(grid, nr, nc);
			}
		}
	}
	void fill(vector<vector<char>> & grid) {
		int row = grid.size();
		int col = grid[0].size();
		for (int i = 0; i<row; i++) {
			if (grid[i][0] == 'O')
				DFS(grid, i, 0);
		}
		for (int i = 0; i<row; i++) {
			if (grid[i][col - 1] == 'O')
				DFS(grid, i, col - 1);
		}
		for (int j = 0; j<col; j++) {
			if (grid[0][j] == 'O')
				DFS(grid, 0, j);
		}
		for (int j = 0; j<col; j++) {
			if (grid[row - 1][j] == 'O')
				DFS(grid, row - 1, j);
		}
		
		for (int i = 0; i<row; i++) {
			for (int j = 0; j<col; j++) {
				if (grid[i][j] == 'O')
					grid[i][j] = 'X';
				if (grid[i][j] == '#')
					grid[i][j] = 'O';
			}
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna