class Solution {
	public:
	vector<int> intersect(vector<int>& a, vector<int>& b) {
		// code here
		unordered_set<int> s1;
		for (int i = 0; i<a.size(); i++) {
			s1.insert(a[i]);
		}
		vector<int> ans;
		for (int i = 0; i<b.size(); i++) {
			if (s1.find(b[i]) != s1.end()) {
				ans.push_back(b[i]);
				s1.erase(b[i]);
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna