class Solution {
	public:
	void DFS(vector<vector<vector<int>>> &adjList, int src, int d, vector<int> &dis) {
		dis[src] = d;
		for (int i = 0; i<adjList[src].size(); i++) {
			if (dis[adjList[src][i][0]]>dis[src]+adjList[src][i][1])
				DFS(adjList, adjList[src][i][0], dis[src]+adjList[src][i][1], dis);
		}
	}
	vector<int> dijkstra(vector<vector<vector<int>>> &adj, int src) {
		// Code here
		int V = adj.size();
		vector<int> dis(V, INT_MAX);
		DFS(adj, src, 0, dis);
		return dis;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna