class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if(n%400==0||(n%100!=0&&n%4==0)){
            return 1;
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna