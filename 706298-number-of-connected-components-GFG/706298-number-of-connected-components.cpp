class Solution {
	public:
	void group(vector<vector<int>> & adjList, int startNode, vector<bool> &visit) {
		visit[startNode] = 1;
		queue<int> q;
		q.push(startNode);
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			for (int i = 0; i<adjList[temp].size(); i++) {
				if (visit[adjList[temp][i]] == 0) {
					visit[adjList[temp][i]] = 1;
					q.push(adjList[temp][i]);
				}
			}
		}
	}
	int countConnected(int V, vector<vector<int>> & edges) {
		// code here
		vector<vector<int>> adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back(edges[i][1]);
			adjList[edges[i][1]].push_back(edges[i][0]);
		}
		vector<bool> visit(V, 0);
		int count = 0;
		for (int startNode = 0; startNode<V; startNode++) {
			if (visit[startNode] == 0) {
				group(adjList, startNode, visit);
				count++;
			}
		}
		return count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna