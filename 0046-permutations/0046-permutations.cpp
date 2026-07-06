class Solution {
public:
    void permutation(vector<int>& nums, vector<int>& temp,
                     vector<bool>& visited, vector<vector<int>>& result) {
        if (nums.size() == temp.size()) {
            result.push_back(temp);
            return;
        }
        for (int i = 0; i < visited.size(); i++) {
            if (visited[i] == 0) {
                visited[i] = 1;
                temp.push_back(nums[i]);
                permutation(nums, temp, visited, result);
                visited[i] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<bool> visited(nums.size(), 0);
        vector<vector<int>> result;
        permutation(nums, temp, visited, result);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna