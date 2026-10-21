class Solution {
	public:
	void DFS(vector<vector<int>> &adjList, int start, vector<bool> &visit,vector<int> &ans) {
		visit[start] = 1;
		for (int i = 0; i<adjList[start].size(); i++) {
			if (visit[adjList[start][i]] == 0) {
				DFS(adjList, adjList[start][i], visit,ans);
			}
		}
		ans.push_back(start);
	}
	vector<int> topoSort(int V, vector<vector<int>> & edges) {
		// code here
		vector<vector<int>> adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back(edges[i][1]);
		}
		vector<bool> visit(V, false);
		vector<int> ans;
		for (int i = 0; i<V; i++) {
			if (visit[i] == false) {
				DFS(adjList, i, visit,ans);
			}
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna