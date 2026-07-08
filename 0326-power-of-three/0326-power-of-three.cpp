class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) {
            return 0;
        }
        while (n != 1) {
            if (n % 3 != 0) {
                return false;
            }
            n = n / 3;
        }
        return true;
    }
};

/*
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return 0;
        }
        for (int i = 1; i <= n; i = i * 3) {
            if (i == n) {
                return 1;
            }
            if(i>INT_MAX/3){
                return 0;
            }
        }
        return 0;
    }
};
*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna