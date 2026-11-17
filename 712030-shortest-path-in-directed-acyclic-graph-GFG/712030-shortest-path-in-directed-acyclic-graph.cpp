class Solution {
	public:
	void sortestDis(vector<vector<pair<int, int>>> &adjList, int src, vector<int> &dis)
	{
		queue<int> q;
		q.push(src);
		dis[src] = 0;
		while (!q.empty())
			{
			int temp = q.front();
			q.pop();
			for (auto val : adjList[temp])
				{
				if (dis[val.first] > dis[temp] + val.second)
					{
					q.push(val.first);
					dis[val.first] = dis[temp] + val.second;
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
		vector<int> dis(V, INT_MAX);
		sortestDis(adjList, 0, dis);
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