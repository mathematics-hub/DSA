class Solution {
	public:
	vector<int> mergeArrays(vector<vector<int>> &mat) {
		// Code here
		int m = mat.size();
		int n = mat[0].size();
		vector<int> ans;
		priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
		for (int i = 0; i<m; i++) {
			q.push({mat[i][0], {i, 0}});
		}
		while (!q.empty()) {
			auto temp = q.top();
			q.pop();
			
			int val = temp.first;
			int i = temp.second.first;
			int j = temp.second.second;
			
			ans.push_back(val);
			if (j<n - 1) {
				q.push({mat[i][j + 1], {i, j + 1}});
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna