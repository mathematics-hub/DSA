class Solution {
	public:
	bool DFS(vector<vector<int>> &adjList, int startNode, vector<int> &color) {
		for (int val:adjList[startNode]) {
			if (color[startNode] == color[val]) {
				return false;
			}
			if (color[val] == -1) {
				color[val] = (color[startNode]+1)%2;
				if (DFS(adjList, val, color) == false) {
					return false;
				}
			}
		}
		return true;
	}
	bool isBipartite(vector<vector<int>> &adj) {
		int v = adj.size();
		vector<int> color(v, -1);
		for (int i = 0; i<v; i++) {
			if (color[i] == -1) {
				color[i] = 0;
				if (!DFS(adj, i, color)) {
					return false;
				}
			}
		}
		return true;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna