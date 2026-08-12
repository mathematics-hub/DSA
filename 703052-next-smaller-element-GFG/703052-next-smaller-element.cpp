class Solution {
	public:
	vector<int> nextSmallerEle(vector<int>& arr) {
		//  code here
		stack<int> storeindex;
		vector<int> ans(arr.size(), -1);
		for (int i = 0; i<arr.size(); i++) {
			if (storeindex.empty()) {
				storeindex.push(i);
			}
			else {
				while (!storeindex.empty() && arr[storeindex.top()]>arr[i]) {
					ans[storeindex.top()] = arr[i];
					storeindex.pop();
				}
				storeindex.push(i);
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna