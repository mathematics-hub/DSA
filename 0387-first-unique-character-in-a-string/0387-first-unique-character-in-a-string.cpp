class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26, 0);
        for (int i = 0; s[i] != '\0'; i++) {
            count[s[i] - 'a']++;
        }
        for (int i = 0; s[i] != '\0'; i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna