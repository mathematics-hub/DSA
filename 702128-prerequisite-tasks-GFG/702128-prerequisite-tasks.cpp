class Solution {
	public:
	bool prerequisiteTasks(int n, vector<vector<int>> & pre) {
		vector<vector<int>> adjList(n);
		vector<int> indegree(n, 0);
		for (int i = 0; i<pre.size(); i++) {
			adjList[pre[i][1]].push_back(pre[i][0]);
			indegree[pre[i][0]]++;
		}
		
		queue<int> q;
		for (int i = 0; i<n; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		
		int count = 0;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			count++;
			for (int val:adjList[temp]) {
				indegree[val]--;
				if (indegree[val] == 0) {
					q.push(val);
				}
			}
		}
		return count == n;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna