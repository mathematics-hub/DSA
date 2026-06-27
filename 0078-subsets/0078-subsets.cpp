class Solution {
public:
    void powerset(vector<vector<int>>& result, vector<int>& nums,
                  vector<int> &subset, int index, int n) {
        if (index == n) {
            result.push_back(subset);
            return;
        }
        powerset(result, nums, subset, index + 1, n);
        subset.push_back(nums[index]);
        powerset(result, nums, subset, index + 1, n);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        int index = 0;
        powerset(result, nums, temp, index, nums.size());
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna