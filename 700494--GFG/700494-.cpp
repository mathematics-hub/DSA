class Solution {
	public:
	string findOrder(vector<string> &words) {
		// code here
		vector<bool> distinct(26, 0);
		for (int i = 0; i<words.size(); i++) {
			for (int j = 0; j<words[i].size(); j++) {
				distinct[words[i][j]-'a'] = 1;
			}
		}
		int totalNode = 0;
		for (int i = 0; i<26; i++) {
			if (distinct[i]) {
				totalNode++;
			}
		}
		
		vector<vector<int>> adjList(26);
		vector<int> indegree(26, 0);
		
		for (int i = 0; i<words.size() - 1; i++) {
			int j = 0;
			string word1 = words[i];
			string word2 = words[i + 1];
			int len = min(word1.size(), word2.size());
			while (j<len && word1[j] == word2[j]) {
				j++;
			}
			if (j<len) {
				adjList[word1[j]-'a'].push_back(word2[j]-'a');
				indegree[word2[j]-'a']++;
			}
		}
		
		
		queue<int> q;
		for (int i = 0; i<26; i++) {
			if (distinct[i] && indegree[i] == 0) {
				q.push(i);
			}
		}
		
		string ans;
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			ans += (temp + 'a');
			
			for (int i = 0; i<adjList[temp].size(); i++) {
				indegree[adjList[temp][i]]--;
				if (indegree[adjList[temp][i]] == 0) {
					q.push(adjList[temp][i]);
				}
			}
		}
		
		return ans.size() == totalNode?ans:"";
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna