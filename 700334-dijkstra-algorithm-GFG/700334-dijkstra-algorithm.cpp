class Solution {
	public:
	vector<int> dijkstra(vector<vector<vector<int>>> &adjList, int src) {
		// Code here
		int V = adjList.size();
		vector<int> dis(V, INT_MAX);
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > q;
		dis[src] = 0;
		q.push({0, src});
		while (!q.empty()) {
			int mindis = q.top().first;
			int node = q.top().second;
			q.pop();
			
			if (mindis > dis[node])
				continue;
			for (int i = 0; i<adjList[node].size(); i++) {
				int nbd = adjList[node][i][0];
				int wgt = adjList[node][i][1];
				if (dis[nbd]>dis[node]+wgt) {
					dis[nbd] = dis[node]+wgt;
					q.push({dis[nbd], nbd});
				}
			}
		}
		
		return dis;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna