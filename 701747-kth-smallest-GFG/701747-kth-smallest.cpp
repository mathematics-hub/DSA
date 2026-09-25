class Solution {
	public:
	int kthSmallest(vector<int> &arr, int k) {
		// code here
		priority_queue<int, vector<int>, greater<int>> q;
		for (int val:arr) {
			q.push(val);
		}
		while (k>1) {
			q.pop();
			k--;
		}
		return q.top();
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna