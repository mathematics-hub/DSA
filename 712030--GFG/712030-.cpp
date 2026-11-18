class Solution {
	public:
	void tropologicalSort(vector<vector<pair<int, int>>> &adjList, queue<int> &trop) {
		int V = adjList.size();
		vector<int> indegree(V, 0);
		for (int i = 0; i<V; i++) {
			for (auto val:adjList[i]) {
				indegree[val.first]++;
			}
		}
		queue<int> q;
		for (int i = 0; i<V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			trop.push(temp);
			for (auto val:adjList[temp]) {
				indegree[val.first]--;
				if (indegree[val.first] == 0) {
					q.push(val.first);
				}
			}
		}
	}
	vector<int> shortestPath(int V, vector<vector<int>> & edges) {
		// code here
		vector<vector<pair<int, int>> > adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back({edges[i][1], edges[i][2]});
		}
		
		queue<int> trop;
		tropologicalSort(adjList, trop);
		
		vector<int> dis(V, INT_MAX);
		dis[0] = 0;
		while (!trop.empty()) {
			int temp = trop.front();
			trop.pop();
			for (auto val:adjList[temp]) {
				if (dis[temp] == INT_MAX)
					continue;
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