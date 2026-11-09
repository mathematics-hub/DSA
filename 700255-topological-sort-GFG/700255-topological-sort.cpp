class Solution {
	public:
	void DFS(vector<vector<int>> &adjList, int startNode, vector<bool> &visit, stack<int> &st) {
		visit[startNode] = true;
		for (int i = 0; i<adjList[startNode].size(); i++) {
			if (visit[adjList[startNode][i]] == false) {
				DFS(adjList, adjList[startNode][i], visit, st);
			}
		}
		st.push(startNode);
	}
	vector<int> topoSort(vector<vector<int>> & adj) {
		// code here
		vector<bool> visit(adj.size(), false);
		stack<int> st;
		for (int i = 0; i<adj.size(); i++)
			DFS(adj, i, visit, st);
		vector<int> ans;
		while (!st.empty()) {
			ans.push_back(st.top());
			st.pop();
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna