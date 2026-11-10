class Solution {
	public:
	bool BFS(vector<vector<int>> &adjList, int startNode,vector<int> &color) {
		queue<int> q;
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
		int v = adj.size();
		vector<int> color(v, -1);
		for (int i = 0; i<v; i++) {
			if (color[i] == -1 && BFS(adj, i, color)==false) {
				return false;
			}
		}
		return true;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna