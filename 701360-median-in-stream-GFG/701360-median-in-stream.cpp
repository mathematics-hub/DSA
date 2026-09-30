class Solution {
	public:
	vector<double> getMedian(vector<int> &arr) {
		// code here
		priority_queue<int> q1;
		priority_queue<int, vector<int>, greater<int>> q2;
		vector<double> ans;
		for (int i = 0; i<arr.size(); i++) {
			if (!q1.empty() && arr[i]<q1.top()) {
				q1.push(arr[i]);
			}
			else {
				q2.push(arr[i]);
			}
			if (q1.size() == q2.size() + 2) {
				q2.push(q1.top());
				q1.pop();
			}
			if (q2.size() == q1.size() + 2) {
				q1.push(q2.top());
				q2.pop();
			}
			if (q1.size() == q2.size()) {
				ans.push_back((double)(q1.top() + q2.top())/2);
			}
			if (q1.size() == q2.size() + 1) {
				ans.push_back((double)(q1.top()));
			}
			if (q2.size() == q1.size() + 1) {
				ans.push_back((double)(q2.top()));
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna