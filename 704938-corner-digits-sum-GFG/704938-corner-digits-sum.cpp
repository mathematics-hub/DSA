

class Solution {
  public:
    int corner_digitSum(int n) {
        // Code here
        if(n>=0&&n<=9){
            return n;
        }
        int first=0,last=n%10;
        while(n!=0){
            if(n>0&&n<=9){
                first=n;
                break;
            }
            n=n/10;
        }
        return first+last;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna