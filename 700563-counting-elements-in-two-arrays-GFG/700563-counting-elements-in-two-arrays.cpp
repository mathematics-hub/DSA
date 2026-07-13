class Solution {
	public:
	vector<int> countLessEq(vector<int>& a, vector<int>& b) {
		// code here
		int s1 = a.size(), s2 = b.size();
		sort(b.begin(), b.end());
		vector<int> ans;
		for (int i = 0; i<s1; i++) {
			int start = 0, end = s2 - 1, index = -1;
			while (start <= end) {
				int mid = (start + end)>> 1;
				if (b[mid] <= a[i]) {
					index = mid;
					start = mid + 1;
				}
				else {
					end = mid - 1;
				}
			}
			ans.push_back(index + 1);
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna