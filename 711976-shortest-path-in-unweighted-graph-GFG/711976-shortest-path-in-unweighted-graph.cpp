class Solution {
	public:
	void BFS(vector<vector<int>> &adjList, int node, vector<bool> &visit, vector<int> &dis) {
		queue<int> q;
		q.push(node);
		visit[node] = 1;
		dis[node] = 0;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			for (int val:adjList[temp]) {
				if (visit[val] == 0) {
					q.push(val);
					visit[val] = 1;
					dis[val] = dis[temp]+1;
				}
			}
		}
		return;
	}
	void sortestPath_DFS(vector<vector<int>> &adjList, int startNode, int d, vector<bool> &visit, vector<int> &dis)
	{
		if (d >= dis[startNode])
			return;
		visit[startNode] = 1;
		dis[startNode] = d;
		for (int i = 0; i < adjList[startNode].size(); i++)
			{
			if (visit[adjList[startNode][i]] == 0)
				{
				sortestPath_DFS(adjList, adjList[startNode][i], d + 1, visit, dis);
			}
		}
		visit[startNode] = 0;
	}
	
	void DFS(vector<vector<int>> &adjList, int node, int d, vector<int> &ans)
	{
		if (d > ans[node])
			{
			return;
		}
		ans[node] = d;
		for (int i = 0; i < adjList[node].size(); i++)
			{
			DFS(adjList, adjList[node][i], ans[node] + 1, ans);
		}
	}
	
	int shortestPath(vector<vector<int>> &adj, int src, int dest) {
		// code here
		int n = adj.size();
		vector<bool> visit(n, 0);
		vector<int> dis(n, INT_MAX);
		// BFS(adj, src, visit, dis);
		DFS(adj, src, 0, dis);
		return dis[dest] == INT_MAX?-1:dis[dest];
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna