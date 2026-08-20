class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1, arr2;
        for (int i = 0; i < nums.size(); i++) {
            if (arr1.empty()) {
                arr1.push_back(nums[i]);
            } else if (arr2.empty()) {
                arr2.push_back(nums[i]);
            }
            else if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }

        for (int i = 0; i < arr2.size(); i++) {
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna