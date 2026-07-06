class Solution {
public:
    void permutation(vector<int>& nums, int index,
                     vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(nums);
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            permutation(nums, index + 1, result);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> result;
        permutation(nums, index, result);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna