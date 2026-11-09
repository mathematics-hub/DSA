class Solution {
	public:
	bool BFS(vector<vector<int>> &adjList) {
		int v = adjList.size();
		vector<int> indegree(v, 0);
		for (int i = 0; i<v; i++) {
			for (int val:adjList[i]) {
				indegree[val]++;
			}
		}
		queue<int> q;
		for (int i = 0; i<v; i++) {
			if (indegree[i] == 0)
				q.push(i);
		}
		int count = 0;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			count++;
			for (int val:adjList[temp]) {
				indegree[val]--;
				if (indegree[val] == 0)
					q.push(val);
			}
		}
		return count != v;
	}
	bool isCyclic(vector<vector<int>> & adj) {
		// code here
		return BFS(adj);
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna