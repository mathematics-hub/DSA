class Solution {
	public:
	int isValid(string &s) {
		// code here
		int n = s.size();
		int dotCount = 0;
		int segmentCount = 0;
		string segment = "";
		for (int i = 0; i<n; i++) {
			// s[i] is a digit
			if (s[i] >= '0' && s[i] <= '9') {
				segment += s[i];
				segmentCount = segmentCount*10 + (s[i]-'0');
				if (segmentCount>255) {
					return false;
				}
			}
			// not a digit;
			else {
				dotCount++;
				if (segment.size()>1 && segment[0] == '0') {
					return false;
				}
				if (segment.empty()) {
					return false;
				}
				segmentCount = 0;
				segment = "";
			}
		}
		if (dotCount != 3)
			return false;
		else
			return true;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna