class Solution {
	public:
	vector<int> firstNegInt(vector<int>& arr, int k) {
		// code here
		queue<int> all;
		queue<int> neg;
		vector<int> ans;
		for (int i = 0; i < k - 1; i++)
			{
			if (arr[i]<0) {
				neg.push(arr[i]);
			}
			all.push(arr[i]);
		}
		for (int i = k - 1; i < arr.size(); i++)
			{
			if (arr[i]<0) {
				neg.push(arr[i]);
			}
			all.push(arr[i]);
			ans.push_back(neg.empty()?0:neg.front());
			if (!neg.empty() && all.front() == neg.front()) {
				neg.pop();
			}
			all.pop();
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna