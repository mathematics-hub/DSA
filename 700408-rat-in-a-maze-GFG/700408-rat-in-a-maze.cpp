class Solution {
	public:
	void mazepath(vector<vector<int>> &maze, int i, int j, int n, string &path, vector<vector<bool>> &visit, vector<string> &ans)
	{
		if (i == n - 1 && j == n - 1)
			{
			ans.push_back(path);
			return;
		}
		if (i < n - 1 && maze[i + 1][j] == 1 && visit[i + 1][j] == 0) // bottom
			{
			visit[i + 1][j] = 1;
			path.push_back('D');
			mazepath(maze, i + 1, j, n, path, visit, ans);
			path.pop_back();
			visit[i + 1][j] = 0;
		}
		if (j > 0 && maze[i][j - 1] == 1 && visit[i][j - 1] == 0) // left
			{
			visit[i][j - 1] = 1;
			path.push_back('L');
			mazepath(maze, i, j - 1, n, path, visit, ans);
			path.pop_back();
			visit[i][j - 1] = 0;
		}
		if (j < n - 1 && maze[i][j + 1] == 1 && visit[i][j + 1] == 0) // right
			{
			visit[i][j + 1] = 1;
			path.push_back('R');
			mazepath(maze, i, j + 1, n, path, visit, ans);
			path.pop_back();
			visit[i][j + 1] = 0;
		}
		if (i > 0 && maze[i - 1][j] == 1 && visit[i - 1][j] == 0) // up
			{
			visit[i - 1][j] = 1;
			path.push_back('U');
			mazepath(maze, i - 1, j, n, path, visit, ans);
			path.pop_back();
			visit[i - 1][j] = 0;
		}
	}
	vector<string> ratInMaze(vector<vector<int>> & maze) {
		// code here
		int n = maze.size();
		vector<vector<bool>> visit(n, vector<bool>(n, 0));
		int i = 0, j = 0;
		string path;
		vector<string> ans;
		if (maze[0][0] == 0) {
			return ans;
		}
		visit[0][0] = 1;
		mazepath(maze, i, j, n, path, visit, ans);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna