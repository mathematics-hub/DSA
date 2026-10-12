class Solution {
	public:
	bool DFS(vector<vector<int>> &adj, int curr, int prev, vector<bool> &visit) {
		visit[curr] = 1;
		for (int i = 0; i<adj[curr].size(); i++) {
			if (adj[curr][i] == prev && visit[adj[curr][i]] == 1) {
				continue;
			}
			if (visit[adj[curr][i]] == 1) {
				return 1;
			}
			if (DFS(adj, adj[curr][i], curr, visit))return 1;
			
		}
		return false;
	}
	bool isCycle(int V, vector<vector<int>> & edges) {
		// Code here
		vector<vector<int>> adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back(edges[i][1]);
			adjList[edges[i][1]].push_back(edges[i][0]);
		}
		vector<bool> visit(V, 0);
		for (int i = 0; i < V; i++) {
			if (visit[i] == 0) {
				if (DFS(adjList, i, -1, visit) == true) {
					return true;
				}
			}
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna