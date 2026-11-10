class Solution {
	public:
	void island(vector<vector<char>> &grid, int i, int j)
	{
		queue<pair<int, int>> q;
		q.push({i, j});
		while (!q.empty())
			{
			int r = q.front().first;
			int c = q.front().second;
			grid[r][c]='W';
			q.pop();
			int row[] = {-1, -1, -1, 0, 1, 1, 1, 0};
			int col[] = {-1, 0, 1, 1, 1, 0, -1, -1};
			for (int k = 0; k < 8; k++)
				{
				int nr = r + row[k];
				int nc = c + col[k];
				if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && grid[nr][nc] == 'L')
					{
					q.push({nr, nc});
				}
			}
		}
		return;
	}
	int countIslands(vector<vector<char>> & grid) {
		// Code here
		int row = grid.size();
		int col = grid[0].size();
		int count = 0;
		for (int i = 0; i < row; i++)
			{
			for (int j = 0; j < col; j++)
				{
				if (grid[i][j] == 'L')
					{
					island(grid, i, j);
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