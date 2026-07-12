class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<bool> present(n, 0);
        int leftPerson = n, index = 0;
        while (leftPerson > 1) {
            int count = 0;
            while (true) {
                if (present[index] == 0) {
                    count++;
                }
                if (count == k) {
                    break;
                }
                index = (index + 1) % n;
            }
            present[index] = 1;
            leftPerson--;
            while (present[index] == 1) {
                index = (index + 1) % n;
            }
        }
        return index + 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna