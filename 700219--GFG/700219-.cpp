class Solution {
	public:
	bool BFS(vector<vector<int>> &adj, int curr, int prev, vector<bool> &visit) {
		queue<pair<int, int>> q;
		q.push({curr, prev});
		visit[curr] = true;
		while (!q.empty()) {
			auto temp = q.front();
			q.pop();
			for (int i = 0; i<adj[temp.first].size(); i++) {
				if (adj[temp.first][i] != temp.second && visit[adj[temp.first][i]] == 1) {
					return true;
				}
				if (visit[adj[temp.first][i]] == 0) {
					visit[adj[temp.first][i]] = 1;
					q.push({adj[temp.first][i], temp.first});
				}
			}
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
			if (visit[i] == 0 && BFS(adjList, i, -1, visit)) {
				return true;
			}
		}
		return false;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna