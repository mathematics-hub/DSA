class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;
        while (a != 0 || b != 0 || c != 0) {
            int abit = a & 1;
            int bbit = b & 1;
            int cbit = c & 1;
            if (abit == 0 && bbit == 0 && cbit == 1) {
                count++;
            } else if (abit == 1 && bbit == 1 && cbit == 0) {
                count += 2;
            } else if ((abit == 1 || bbit == 1) && cbit == 0) {
                count++;
            }
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna