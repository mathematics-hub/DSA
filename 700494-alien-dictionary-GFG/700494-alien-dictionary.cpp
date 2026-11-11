class Solution {
	public:
	string findOrder(vector<string> &words) {
		// code here
		vector<vector<int>> adjList(26);
		vector<int> indegree(26, 0);
		vector<bool> distinct(26, false);
		
		// Mark all distinct characters present in the words
		for (const string &word : words) {
			for (char ch : word) {
				distinct[ch - 'a'] = true;
			}
		}
		
		int totalNodes = 0;
		for (bool val : distinct) {
			if (val)
				totalNodes++;
		}
		
		for (int i = 0; i<words.size() - 1; i++) {
			int j = 0;
			string w1 = words[i];
			string w2 = words[i + 1];
			int len = min(w1.size(), w2.size());
			while (j<len && w1[j] == w2[j]) {
				j++;
			}
			if (j<len) {
				int u = w1[j]-'a';
				int v = w2[j]-'a';
				adjList[u].push_back(v);
				indegree[v]++;
			}
		}
		
		queue<int> q;
		for (int i = 0; i<26; i++) {
			if (distinct[i] && indegree[i] == 0)
				q.push(i);
		}
		string ans;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			ans.push_back(temp + 'a');
			for (int i = 0; i<adjList[temp].size(); i++) {
				indegree[adjList[temp][i]]--;
				if (indegree[adjList[temp][i]] == 0)
					q.push(adjList[temp][i]);
			}
		}
		return ans.size() == totalNodes?ans:"";
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna