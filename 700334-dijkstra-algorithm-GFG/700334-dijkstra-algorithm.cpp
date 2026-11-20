class Solution {
	public:
	vector<int> dijkstra(vector<vector<vector<int>>> &adjList, int src) {
		// Code here
		int V = adjList.size();
		vector<int> dis(V, INT_MAX);
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > mindis;
		mindis.push({0, src});
		dis[src] = 0;
		while (!mindis.empty()) {
			int d = mindis.top().first;
			int node = mindis.top().second;
			mindis.pop();
			
			if (d > dis[node])
				continue;
			for (int i = 0; i<adjList[node].size(); i++) {
				if (dis[adjList[node][i][0]]>dis[node]+adjList[node][i][1]) {
					dis[adjList[node][i][0]] = dis[node]+adjList[node][i][1];
					mindis.push({dis[adjList[node][i][0]], adjList[node][i][0]});
				}
			}
		}
		
		return dis;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna