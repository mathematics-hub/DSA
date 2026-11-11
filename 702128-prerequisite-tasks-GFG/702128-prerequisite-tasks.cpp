class Solution {
	public:
	bool DFS(vector<vector<int>> &adjList, int startNode, vector<bool> &path, vector<bool> &visit) {
		path[startNode] = 1;
		visit[startNode] = 1;
		for (int val : adjList[startNode]) {
			if (path[val] == 1) {
				return true;
			}
			if (visit[val] == 0 && DFS(adjList, val, path, visit)) {
				return true;
			}
		}
		path[startNode] = 0;
		return false;
	}
	bool prerequisiteTasks(int n, vector<vector<int>> & pre) {
		// code here
		vector<vector<int>> adjList(n);
		for (int i = 0; i<pre.size(); i++) {
			adjList[pre[i][1]].push_back(pre[i][0]);
		}
		vector<bool> path(n, 0);
		vector<bool> visit(n, 0);
		for (int startNode = 0; startNode<n; startNode++) {
			if (visit[startNode] == 0 && DFS(adjList, startNode, path, visit)) {
				return false;
			}
		}
		return true;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna