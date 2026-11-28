class Solution {
  public:
    vector<int> frequencyCount(vector<int> &arr) {
      // code here
      int n = arr.size();
      int mod = n + 1;
      for (int i = 0; i < n; i++) {
        arr[arr[i] % mod - 1] += mod;
      }
      vector<int> count(n, 0);
      for (int i = 0; i < n; i++) {
        if (count[i] == 0)
          count[i] = arr[i] / mod;
      }
      return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna