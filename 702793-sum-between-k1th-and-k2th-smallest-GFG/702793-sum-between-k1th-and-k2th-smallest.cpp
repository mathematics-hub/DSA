class Solution {
	public:
	int sumBetweenK1K2(vector<int>& arr, int k1, int k2) {
		// code here
		priority_queue<int> q;
		for (int i = 0; i<k2; i++) {
			q.push(arr[i]);
		}
		for (int i = k2; i<arr.size(); i++) {
			if (arr[i]<q.top()) {
				q.pop();
				q.push(arr[i]);
			}
		}
		q.pop();
		int sum = 0;
		while (q.size()>k1) {
			sum += q.top();
			q.pop();
		}
		return sum;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna