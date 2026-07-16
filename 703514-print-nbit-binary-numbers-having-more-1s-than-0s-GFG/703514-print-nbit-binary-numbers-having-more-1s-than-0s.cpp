class Solution {
	public:
	void binary(int n, int one, int zero, int index, string str, vector<string> &ans) {
		if (index == n) {
			ans.push_back(str);
			return;
		}
		str += '1';
		binary(n, one + 1, zero, index + 1, str, ans);
		str.pop_back();
		if (one>zero) {
			str += '0';
			binary(n, one, zero + 1, index + 1, str, ans);
			str.pop_back();
		}
	}
	vector<string> NBitBinary(int n) {
		// Your code goes here
		vector<string>ans;
		string str;
		binary(n, 0, 0, 0, str, ans);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna