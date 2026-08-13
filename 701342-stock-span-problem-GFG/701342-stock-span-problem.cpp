class Solution {
	public:
	vector<int> calculateSpan(vector<int>& arr) {
		// code
		stack<int> temp;
		vector<int> ans(arr.size());
		for (int i = arr.size() - 1; i >= 0; i--) {
			while (!temp.empty() && arr[i]>arr[temp.top()]) {
				ans[temp.top()] = temp.top() - i;
				temp.pop();
			}
			temp.push(i);
		}
		while (!temp.empty()) {
			ans[temp.top()] = temp.top() + 1;
			temp.pop();
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna