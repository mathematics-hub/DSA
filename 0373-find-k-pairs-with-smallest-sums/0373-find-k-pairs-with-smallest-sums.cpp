class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
                                       int k) {
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            q;
        int m = nums1.size(), n = nums2.size();

        for (int j = 0; j < min(k, n); j++) {
            q.push({nums1[0] + nums2[j], {0, j}});
        }

        vector<vector<int>> ans;
        while (k-- && !q.empty()) {
            auto temp = q.top();
            q.pop();

            int sum = temp.first;
            int i = temp.second.first;
            int j = temp.second.second;

            ans.push_back({nums1[i], nums2[j]});
            if (i < m - 1) {
                q.push({nums1[i + 1] + nums2[j], {i + 1, j}});
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna