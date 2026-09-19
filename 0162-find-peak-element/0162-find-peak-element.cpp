class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index = 0, largest = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i];
                index = i;
            }
        }
        return index;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna