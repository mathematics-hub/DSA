class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result = start ^ goal;
        int count = 0;
        while (result) {
            count++;
            result &= (result - 1);
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna