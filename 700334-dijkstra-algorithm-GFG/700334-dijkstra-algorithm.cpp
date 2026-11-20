class Solution {
	public:
	vector<int> dijkstra(vector<vector<vector<int>>> &adjList, int src) {
		// Code here
		int V = adjList.size();
		vector<bool> explored(V, 0);
		vector<int> dis(V, INT_MAX);
		dis[src] = 0;
		for (int k = 1; k <= V; k++)
			{
			// select the min dis of node which is unexplored
			int mindis = INT_MAX, node = -1;
			for (int i = 0; i<V; i++) {
				if (explored[i] == 0 && dis[i]<mindis) {
					mindis = dis[i];
					node = i;
				}
			}
			
			explored[node] = 1;
			dis[node] = mindis;
			
			// relax node
			for (int i = 0; i<adjList[node].size(); i++) {
				int nbd = adjList[node][i][0];
				int wgt = adjList[node][i][1];
				if (!explored[nbd] && dis[nbd]>dis[node]+wgt) {
					dis[nbd] = dis[node]+wgt;
				}
			}
		}
		return dis;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna