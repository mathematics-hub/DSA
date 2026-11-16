class Solution {
	public:
	
	bool DFS(vector<vector<int>> &adjList, int node, vector<bool> &path, vector<bool> &visit, vector<int> &ans) {
		path[node] = 1;
		visit[node] = 1;
		for (int val:adjList[node]) {
			if (path[val]) {
				return true;
			}
			if (visit[val] == 0 && DFS(adjList, val, path, visit, ans)) {
				return true;
			}
		}
		path[node] = 0;
		ans.push_back(node);
		return false;
	}
	
	vector<int> findOrder(int n, vector<vector<int>> &pre) {
		vector<vector<int>> adjList(n);
		
		for (int i = 0; i<pre.size(); i++) {
			adjList[pre[i][1]].push_back(pre[i][0]);
		}
		
		vector<bool> path(n, 0);
		vector<bool> visit(n, 0);
		vector<int> ans;
		for (int node = 0; node<n; node++) {
			if (visit[node] == 0 && DFS(adjList, node, path, visit, ans)) {
				return vector<int>();
			}
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna