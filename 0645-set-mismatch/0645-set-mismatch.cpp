class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int start = 0;
        // repeating
        while (start < size - 1) {
            if (nums[start] == nums[start + 1]) {
                ans.push_back(nums[start]);
            }
            start++;
        }

        // missing
        start = 0;
        if (nums[0] != 1) {
            ans.push_back(1);
        }
        while (start < size - 1) {
            if (nums[start + 1] - nums[start] == 2) {
                ans.push_back(nums[start] + 1);
            }
            start++;
        }
        if (nums[size - 1] != size) {
            ans.push_back(size);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna