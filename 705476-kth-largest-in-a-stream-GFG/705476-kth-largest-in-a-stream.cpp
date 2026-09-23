class Solution {
	public:
	vector<int> kthLargest(vector<int>& arr, int k) {
		// code here
		priority_queue<int, vector<int>, greater<int>> q;
		vector<int> ans(k - 1, -1);
		for (int i = 0; i<k; i++) {
			q.push(arr[i]);
		}
		for (int i = k; i<arr.size(); i++) {
			ans.push_back(q.top());
			if (arr[i]>q.top()) {
				q.pop();
				q.push(arr[i]);
			}
		}
		ans.push_back(q.top());
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna