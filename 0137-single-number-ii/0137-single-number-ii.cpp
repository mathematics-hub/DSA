class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for (int bit_no = 0; bit_no < 32; bit_no++) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if ((nums[i] & (1 << bit_no))) {
                    count++;
                }
            }
            if (count % 3 != 0) {
                result = result | (1 << bit_no);
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna