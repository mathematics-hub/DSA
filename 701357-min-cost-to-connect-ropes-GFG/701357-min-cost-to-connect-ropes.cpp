class Solution {
	public:
	int minCost(vector<int>& arr) {
		// code here
		priority_queue<int, vector<int>, greater<int>> q;
		for (int val:arr) {
			q.push(val);
		}
		int total_Cost = 0;
		while (q.size()>1) {
			int firstmin = q.top();
			q.pop();
			int secondmin = q.top();
			q.pop();
			int total = firstmin + secondmin;
			total_Cost += total;
			q.push(total);
		}
		return total_Cost;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna