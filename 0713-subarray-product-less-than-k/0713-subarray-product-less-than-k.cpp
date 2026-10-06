class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) {
            return 0;
        }
        int totalSubArray = 0;
        int start = 0, end = 0;
        int product = 1;
        while (end < nums.size()) {
            product *= nums[end];
            while (start <= end && product >= k) {
                product /= nums[start];
                start++;
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