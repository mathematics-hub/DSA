class Solution {
	public:
	void dfsTraversal(vector<vector<int>> &adj, int node, vector<bool> &visit, vector<int> &ans) {
		visit[node] = 1;
		ans.push_back(node);
		for (int i = 0; i<adj[node].size(); i++) {
			if (visit[adj[node][i]] == 0) {
				dfsTraversal(adj, adj[node][i], visit, ans);
			}
		}
	}
	vector<int> dfs(vector<vector<int>> & adj) {
		// Code here
		vector<bool> visit(adj.size(), 0);
		vector<int> ans;
		dfsTraversal(adj, 0, visit, ans);
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna