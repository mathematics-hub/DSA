class Solution {
	public:
	vector<int> bfs(vector<vector<int>> &adj) {
		// code here
		vector<int> ans;
		queue<int> q;
		q.push(0);
		vector<bool> visit(adj.size(), 0);
		visit[0] = 1;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			ans.push_back(temp);
			for (int i = 0; i<adj[temp].size(); i++) {
				if (visit[adj[temp][i]] != 1) {
					q.push(adj[temp][i]);
					visit[adj[temp][i]] = 1;
				}
			}
		}
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna