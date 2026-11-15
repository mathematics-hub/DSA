class Solution {
	public:
	void DFS(vector<vector<int>> &adjList, int node, vector<bool> &visit, stack<int> &st) {
		visit[node] = true;
		for (int val:adjList[node]) {
			DFS(adjList, val, visit, st);
		}
		st.push(node);
	}
	vector<int> findOrder(int n, vector<vector<int>> &pre) {
		vector<vector<int>> adjList(n);
		
		for (int i = 0; i<pre.size(); i++) {
			adjList[pre[i][1]].push_back(pre[i][0]);
		}
		
		vector<bool> visit(n, 0);
		stack<int> st;
		for (int i = 0; i<n; i++) {
			if (visit[i] == 0) {
				DFS(adjList, i, visit, st);
			}
		}
		
		vector<int> ans;
		while (!st.empty()) {
			ans.push_back(st.top());
			st.pop();
		}
		return (ans.size() == n) ? ans : vector<int> {};
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna