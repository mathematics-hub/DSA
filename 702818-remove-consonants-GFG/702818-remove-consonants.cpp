class Solution {
	public:
	string remConsonants(string &s) {
		// code here
		string ans;
		for (char x:s) {
			if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
			x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
			ans += x;
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna