
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        swap(arr[k-1],arr[arr.size()-k]);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna