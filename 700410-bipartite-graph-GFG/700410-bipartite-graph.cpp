class Solution {
	public:
	bool BFS(vector<vector<int>> &adjList, int startNode) {
	    int v=adjList.size();
		queue<int> q;
		vector<int> color(v, -1);
		q.push(startNode);
		color[startNode] = 0;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			for (int i = 0; i<adjList[temp].size(); i++) {
				if (color[temp] == color[adjList[temp][i]]) {
					return false;
				}
				if (color[adjList[temp][i]] == -1) {
					q.push(adjList[temp][i]);
					color[adjList[temp][i]] = (color[temp] == 1?0:1);
				}
			}
		}
		return true;
	}
	bool isBipartite(vector<vector<int>> &adj) {
		// Code here
		return BFS(adj, 0);
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna