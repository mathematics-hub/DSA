class Solution {
	public:
	bool isProduct(vector<int>& arr, long long target) {
		// code here
		sort(arr.begin(), arr.end());
		int n = arr.size();
		for (int i = 0; i<n - 1; i++) {
			if (arr[i] == 0) {
				if (target == 0)return true;
				continue;
			}
			if (target%arr[i] != 0)continue;
			int x = target/arr[i];
			int start = i + 1, end = n - 1;
			while (start <= end) {
				int mid = (start + end)/2;
				if (arr[mid] == x) {
					return true;
				}
				else if (x<arr[mid]) {
					end = mid - 1;
				}
				else {
					start = mid + 1;
				}
			}
		}
		return false;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna