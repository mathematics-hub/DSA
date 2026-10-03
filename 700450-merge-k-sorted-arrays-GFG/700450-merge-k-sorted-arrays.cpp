class Solution {
	public:
	vector<int> merge(vector<int> &a, vector<int> &b) {
		int i = 0, j = 0;
		vector<int> ans;
		while (i<a.size() && j<b.size()) {
			if (a[i]<b[j]) {
				ans.push_back(a[i]);
				i++;
			}
			else {
				ans.push_back(b[j]);
				j++;
			}
		}
		while (i<a.size()) {
			ans.push_back(a[i]);
			i++;
		}
		while (j<b.size()) {
			ans.push_back(b[j]);
			j++;
		}
		return ans;
	}
	vector<int> mergeArrays(vector<vector<int>> &mat) {
		// Code here
		vector<int> result;
		for (int i = 0; i<mat.size(); i++) {
			result = merge(result, mat[i]);
		}
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna