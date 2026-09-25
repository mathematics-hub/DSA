class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        for (int val : gifts) {
            q.push(val);
        }
        while (k--) {
            int temp = q.top();
            q.pop();
            q.push(sqrt(temp));
        }
        long long totalGifts = 0;
        while (!q.empty()) {
            totalGifts += q.top();
            q.pop();
        }
        return totalGifts;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna