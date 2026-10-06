class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long totalSubArray = 0;
        int start = 0, end = 0;
        long long sum = 0;
        while (end < nums.size()) {
            sum += nums[end];
            long long score = sum * (end - start + 1);
            while (score >= k) {
                sum -= nums[start];
                start++;
                score = sum * (end - start + 1);
            }
            totalSubArray += (end - start + 1);
            end++;
        }
        return totalSubArray;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna