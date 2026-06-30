// Back-end complete function Template for C++

class Solution {
	public:
	vector<int> commonElements(vector<int> &a, vector<int> &b) {
		// Your code here
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int s1 = a.size();
		int s2 = b.size();
		int i = 0, j = 0;
		vector<int> result;
		while (i<s1 && j<s2) {
			if (a[i] == b[j]) {
				result.push_back(a[i]);
				i++; j++;
			}
			else if (a[i]<b[j]) {
				i++;
			}
			else {
				j++;
			}
		}
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna