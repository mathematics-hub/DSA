class Solution {
	public:
	vector<int> dfs(vector<vector<int>> & adj) {
		// Code here
		stack<int> st;
		vector<bool> visit(adj.size(), false);
		st.push(0);
		visit[0] = true;
		vector<int> ans = {0};
		while (!st.empty()) {
			int temp = st.top();
			bool visitAll = true;
			for (int i = 0; i<adj[temp].size(); i++) {
				if (visit[adj[temp][i]] == false) {
					ans.push_back(adj[temp][i]);
					visit[adj[temp][i]] = true;
					st.push(adj[temp][i]);
					visitAll = false;
					break;
				}
			}
			if (visitAll) {
				st.pop();
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna