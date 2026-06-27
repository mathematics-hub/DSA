class Solution {
	public:
	vector<int> subarraySum(vector<int> &arr, int target) {
		int n = arr.size();
		int start = 0, end = 0;
		int sum=arr[start];
		while (end<n) {
			if (sum == target) {
				return {start+1, end+1};
			}
			else if (sum<target) {
				end++;
				sum+=arr[end];
			}
			else {
			    sum-=arr[start];
				start++;
			}
		}
		return {-1};
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna