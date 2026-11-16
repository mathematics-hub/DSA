class Solution {
	public:
	string findOrder(vector<string> &words) {
		// code here
		vector<bool> distinct(26, 0);
		for (string str:words) {
			for (char ch:str) {
				distinct[ch - 'a'] = 1;
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
			string word1 = words[i];
			string word2 = words[i + 1];
			int len = min(word1.size(), word2.size());
			int j = 0;
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
			ans.push_back(temp + 'a');
			for (int val:adjList[temp]) {
				indegree[val]--;
				if (indegree[val] == 0) {
					q.push(val);
				}
			}
		}
		return (ans.size() == totalNode)?ans: "";
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna