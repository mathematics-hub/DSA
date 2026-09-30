class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            q;
        for (int i = 0; i < min(k, n); i++) {
            q.push({matrix[i][0], {i, 0}});
        }
        while (k > 1) {
            auto X = q.top();
            q.pop();
            k--;

            int val = X.first;
            int i = X.second.first;
            int j = X.second.second;

            if (j < n - 1) {
                q.push({matrix[i][j + 1], {i, j + 1}});
            }
        }
        return q.top().first;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna