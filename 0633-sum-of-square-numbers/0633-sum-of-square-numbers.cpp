class Solution {
public:
    bool judgeSquareSum(int c) {
        int start = 0, end = sqrt(c);
        while (start <= end) {
            if (start * start == c - end * end) {
                return true;
            }
            if (start * start < c - end * end) {
                start++;
            } else {
                end--;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna