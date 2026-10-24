class Solution {
	public:
	bool DFS(int node, int color, vector<vector<int>> &adjList, vector<int> &visit) {
		visit[node] = color;
		for (int i = 0; i<adjList[node].size(); i++) {
			if (visit[node] == visit[adjList[node][i]]) {
				return false;
			}
			if (visit[adjList[node][i]] == -1 && !DFS(adjList[node][i], color == 0?1:0, adjList, visit)) {
				return false;
			}
		}
		return true;
	}
	bool isBipartite(int V, vector<vector<int>> &edges) {
		// Code here
		vector<vector<int>> adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back(edges[i][1]);
			adjList[edges[i][1]].push_back(edges[i][0]);
		}
		vector<int> visit(adjList.size(), -1);
		return DFS(0, 0, adjList, visit);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna