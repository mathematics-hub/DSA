class Solution {
	public:
	void tropologicalSort(vector<vector<pair<int, int>>> &adjList, int src, vector<bool>&visit, stack<int> &st) {
		visit[src] = 1;
		for (auto val:adjList[src]) {
			if (visit[val.first] == 0) {
				tropologicalSort(adjList, val.first, visit, st);
			}
		}
		st.push(src);
	}
	vector<int> shortestPath(int V, vector<vector<int>> & edges) {
		// code here
		vector<vector<pair<int, int>> > adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back({edges[i][1], edges[i][2]});
		}
		
		vector<bool> visit(V, 0);
		stack<int> st;
		tropologicalSort(adjList, 0, visit, st);
		vector<int> dis(V, INT_MAX);
		dis[0] = 0;
		while (!st.empty()) {
			int temp = st.top();
			st.pop();
			for (auto val:adjList[temp]) {
				dis[val.first] = min(dis[val.first], dis[temp]+val.second);
			}
		}
		for (int i = 0; i<V; i++) {
			if (dis[i] == INT_MAX) {
				dis[i] = -1;
			}
		}
		return dis;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna