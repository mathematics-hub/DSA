class Solution {
public:
    void permutation(vector<int>& nums, int index,
                     vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(nums);
            return;
        }
        vector<bool> track(21, false);
        for (int i = index; i < nums.size(); i++) {
            if (track[nums[i] + 10] == false) {
                track[nums[i] + 10] = true;
                swap(nums[i], nums[index]);
                permutation(nums, index + 1, result);
                swap(nums[i], nums[index]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        int index = 0;
        permutation(nums, index, result);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna