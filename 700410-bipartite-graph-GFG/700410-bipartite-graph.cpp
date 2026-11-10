class Solution {
	public:
	bool DFS(vector<vector<int>> &adjList, int startNode, int clr, vector<int> &color) {
		color[startNode] = clr;
		for (int i = 0; i<adjList[startNode].size(); i++) {
			if (color[startNode] == color[adjList[startNode][i]]) {
				return false;
			}
			if (color[adjList[startNode][i]] == -1 && DFS(adjList, adjList[startNode][i], (clr + 1)%2, color) == false) {
				return false;
			}
		}
		return true;
	}
	bool isBipartite(vector<vector<int>> &adj) {
		int v = adj.size();
		vector<int> color(v, -1);
		for (int i = 0; i<v; i++) {
			if (color[i] == -1 && DFS(adj, i, 0, color) == false) {
				return false;
			}
		}
		return true;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna