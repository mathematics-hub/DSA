class Solution {
	public:
	vector<int> kthLargest(vector<int>& arr, int k) {
		// code here
		priority_queue<int, vector<int>, greater<int>> q;
		vector<int> ans;
		for (int i = 0; i<arr.size(); i++) {
			q.push(arr[i]);
			if (q.size()>k) {
				q.pop();
			}
			if (q.size()<k) {
				ans.push_back(-1);
			}
			if (q.size() == k) {
				ans.push_back(q.top());
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna