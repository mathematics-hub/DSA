class Solution {
	public:
	int kthElement(vector<int> &a, vector<int> &b, int k) {
		// code here
		int i = 0, j = 0;
		while (k>1 && i<a.size() && j<b.size()) {
			if (a[i] <= b[j]) {
				i++;
			}
			else {
				j++;
			}
			k--;
		}
		while (k>1 && i<a.size()) {
			i++;
			k--;
		}
		while (k>1 && j<b.size()) {
			j++;
			k--;
		}
		if (i == a.size())return b[j];
		if (j == b.size())return a[i];
		return a[i]<b[j]?a[i]:b[j];
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna