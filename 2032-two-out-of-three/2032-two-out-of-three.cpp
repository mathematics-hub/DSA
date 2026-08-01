class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        vector<int> ans;
        int index1 = 0, index2 = 0, index3 = 0;
        int p = nums1.size(), q = nums2.size(), r = nums3.size();
        while (index1 < p && index2 < q && index3 < r) {
            if (nums1[index1] == nums2[index2]) {
                ans.push_back(nums1[index1]);
                index1++;
                index2++;
            } else if (nums2[index2] == nums3[index3]) {
                ans.push_back(nums2[index2]);
                index2++;
                index3++;
            } else if (nums1[index1] == nums3[index3]) {
                ans.push_back(nums1[index1]);
                index1++;
                index3++;
            } else if (nums1[index1] < nums2[index2] &&
                       nums1[index1] < nums3[index3]) {
                index1++;
            } else if (nums2[index2] < nums1[index1] &&
                       nums2[index2] < nums3[index3]) {
                index2++;
            } else if (nums3[index3] < nums1[index1] &&
                       nums3[index3] < nums2[index2]) {
                index3++;
            }
        }
        while (index1 == p && index2 < q && index3 < r) {
            if (nums2[index2] == nums3[index3]) {
                ans.push_back(nums2[index2]);
                index2++;
                index3++;
            } else {
                (nums2[index2] < nums3[index3]) ? index2++ : index3++;
            }
        }
        while (index2 == q && index1 < p && index3 < r) {
            if (nums1[index1] == nums3[index3]) {
                ans.push_back(nums1[index1]);
                index1++;
                index3++;
            } else {
                (nums1[index1] < nums3[index3]) ? index1++ : index3++;
            }
        }
        while (index3 == r && index1 < p && index2 < q) {
            if (nums1[index1] == nums2[index2]) {
                ans.push_back(nums1[index1]);
                index1++;
                index2++;
            } else {
                (nums1[index1] < nums2[index2]) ? index1++ : index2++;
            }
        }
        sort(ans.begin(), ans.end());
        int i = 0;
        while (i + 1 < ans.size()) {
            if (ans[i] == ans[i + 1])
                ans.erase(ans.begin() + i);
            else
                i++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna