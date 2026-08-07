class Solution {
	public:
	int countFriendsPairings(int n) {
		// code here
		if (n == 1 || n == 2)return n;
		return countFriendsPairings(n - 1) + countFriendsPairings(n - 2)*(n - 1);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna