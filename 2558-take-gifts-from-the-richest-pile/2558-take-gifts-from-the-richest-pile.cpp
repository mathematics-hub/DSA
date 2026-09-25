class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for (int i = 1; i <= k; i++) {
            int index = 0;
            for (int j = 1; j < gifts.size(); j++) {
                if (gifts[j] > gifts[index]) {
                    index = j;
                }
            }
            gifts[index] = sqrt(gifts[index]);
        }
        long long noOfGifts = 0;
        for (int i = 0; i < gifts.size(); i++) {
            noOfGifts += gifts[i];
        }
        return noOfGifts;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna