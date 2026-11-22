class Solution {
	public:
	vector<int> bellmanFord(int V, vector<vector<int>> & edges, int src) {
		// Code here
		vector<int> dis(V, 1e8);
		dis[src] = 0;
		// relax edge V-1 times
		for (int i = 0; i<V - 1; i++) {
			// relax all edges
			bool update = false;
			for (int j = 0; j<edges.size(); j++) {
				int u = edges[j][0];
				int v = edges[j][1];
				int wet = edges[j][2];
				if (dis[u] == 1e8) {
					continue;
				}
				if (dis[v]>dis[u]+wet) {
					update = true;
					dis[v] = dis[u]+wet;
				}
			}
			if (!update) {
				return dis;
			}
		}
		
		for (int j = 0; j<edges.size(); j++) {
			int u = edges[j][0];
			int v = edges[j][1];
			int wet = edges[j][2];
			if (dis[u] == 1e8) {
				continue;
			}
			if (dis[v]>dis[u]+wet) {
				return {-1};
			}
		}
		return dis;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna