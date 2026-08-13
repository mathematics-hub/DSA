class Solution {
	public:
	vector<int> nextSmallerEle(vector<int>& arr) {
		//  code here
		stack<int> temp;
		vector<int> ans(arr.size(), -1);
		for (int i = 0; i<arr.size(); i++) {
			if (temp.empty()) {
				temp.push(i);
			}
			else {
				while (!temp.empty() && arr[temp.top()]>arr[i]) {
					ans[temp.top()] = arr[i];
					temp.pop();
				}
				temp.push(i);
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna