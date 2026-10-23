class Solution {
	public:
	bool BFS(vector<vector<int>> &adjList) {
		int V = adjList.size();
		vector<int> indegree(V, 0);
		for (int i = 0; i<V; i++) {
			for (int j = 0; j<adjList[i].size(); j++) {
				indegree[adjList[i][j]]++;
			}
		}
		queue<int> q;
		for (int i = 0; i<V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		int count = 0;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			count++;
			for (int i = 0; i<adjList[temp].size(); i++) {
				indegree[adjList[temp][i]]--;
				if (indegree[adjList[temp][i]] == 0) {
					q.push(adjList[temp][i]);
				}
			}
		}
		return count != V;
	}
	bool isCyclic(int V, vector<vector<int>> &edges) {
		// code here
		vector<vector<int>> adjList(V);
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]].push_back(edges[i][1]);
		}
		
		return BFS(adjList);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna