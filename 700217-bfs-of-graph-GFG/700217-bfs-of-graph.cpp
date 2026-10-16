class Solution {
	public:
	vector<int> bfs(vector<vector<int>> &adj) {
		// code here
		vector<int> ans;
		queue<int> q;
		vector<bool> visited(adj.size(), false);
		q.push(0);
		visited[0] = true;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			ans.push_back(temp);
			for (int i = 0; i<adj[temp].size(); i++) {
				if (visited[adj[temp][i]] == false) {
					q.push(adj[temp][i]);
					visited[adj[temp][i]] = true;
				}
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna