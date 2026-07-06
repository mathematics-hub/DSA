class Solution {
	public:
	vector<int> findUnion(vector<int> &a, vector<int> &b) {
		// code here
		vector<int> result;
		int s1 = a.size(), s2 = b.size();
		int index1 = 0, index2 = 0;
		while (index1<s1 || index2<s2) {
			if (index1 >= s1) {
				result.push_back(b[index2]);
				index2++;
			}
			else if (index2 >= s2) {
				result.push_back(a[index1]);
				index1++;
			}
			else if (a[index1]<b[index2]) {
				result.push_back(a[index1]);
				index1++;
			}
			else {
				result.push_back(b[index2]);
				index2++;
			}
		}
		int i = 0, j = 1;
		while (j<result.size()) {
			if (result[i] != result[j]) {
				result[i + 1] = result[j];
				i++;
			}
			j++;
		}
		result.resize(i+1);
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna