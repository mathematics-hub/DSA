class Solution {
	public:
	bool areAnagrams(string& s1, string& s2) {
		// code here
		vector<int> count(26, 0);
		for (int i = 0; s1[i] != '\0'; i++) {
			count[s1[i]-'a']++;
		}
		for (int i = 0; s2[i] != '\0'; i++) {
			count[s2[i]-'a']--;
		}
		for (int i = 0; i<26; i++) {
			if (count[i] != 0) {
				return false;
			}
		}
		return true;
	}
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna