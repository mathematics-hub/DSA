class Solution {
	public:
	bool dfs(vector<vector<int>> &adjList, int node, vector<bool> &path, vector<bool> &visit) {
		path[node] = 1;
		visit[node] = 1;
		for (int i = 0; i<adjList[node].size(); i++) {
			if (path[adjList[node][i]]) {
				return true;
			}
			if (visit[adjList[node][i]]) {
				continue;
			}
			if (dfs(adjList, adjList[node][i], path, visit)) {
				return true;
			}
		}
		path[node] = 0;
		return false;
	}
	bool isCyclic(int V, vector<vector<int>> &edges) {
		// code here
		vector<vector<int>> adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back(edges[i][1]);
		}
		vector<bool> path(V, 0);
		vector<bool> visit(V, 0);
		for (int i = 0; i<V; i++) {
			if (visit[i] == false && dfs(adjList, i, path, visit)) {
				return true;
			}
		}
		return false;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna