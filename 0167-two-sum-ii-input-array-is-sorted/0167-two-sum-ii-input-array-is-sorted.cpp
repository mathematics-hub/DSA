class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for (int i = 0; i < n - 1; i++) {
            int start = i + 1, end = n - 1;
            int x = target - numbers[i];
            while (start <= end) {
                int mid = (start + end) / 2;
                if (numbers[mid] == x) {
                    return {i + 1, mid + 1};
                } else if (x < numbers[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        return {-1, -1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna