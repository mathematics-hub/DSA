class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int count=0,n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                count++;
            }
        }
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna