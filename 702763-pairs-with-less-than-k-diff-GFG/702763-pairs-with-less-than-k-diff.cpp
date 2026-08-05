class Solution {
	public:
	int countPairs(vector<int>& arr, int k) {
		// code here
		int size = arr.size();
		int count = 0;
		sort(arr.begin(), arr.end());
        int left = 0;
        for (int right = 1; right < size; right++)
        {
            while (left < right && arr[right] - arr[left] >= k)
                left++;

            count += (right - left);
        }
		return count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna