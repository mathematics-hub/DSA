class Solution {
	public:
	bool DFS(vector<vector<int>> &adjList, int startNode, vector<bool> &path, vector<bool> &visit) {
		path[startNode] = true;
		for (int i = 0; i<adjList[startNode].size(); i++) {
			if (path[adjList[startNode][i]])
				return true;
			if (visit[adjList[startNode][i]] == false && DFS(adjList, adjList[startNode][i], path, visit))
				return true;
		}
		path[startNode] = false;
		return false;
	}
	bool isCyclic(vector<vector<int>> & adj) {
		// code here
		int v = adj.size();
		vector<bool> path(v, false);
		vector<bool> visit(v, false);
		for (int i = 0; i<v; i++) {
			if (visit[i] == false && DFS(adj, i, path, visit))
				return true;
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna