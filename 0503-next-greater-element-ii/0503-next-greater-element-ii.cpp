class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, -1);
        for (int i = 0; i < size; i++) {
            int j = (i + 1) % size;
            while (1) {
                if (j == i) {
                    break;
                }
                if (nums[j] > nums[i]) {
                    ans[i] = nums[j];
                    break;
                }
                j = (j + 1) % size;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna