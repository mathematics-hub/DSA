class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            int x=target-arr[i];
            int start=i+1,end=n-1;
            while(start<end){
                if(arr[start]+arr[end]==x){
                    return 1;
                }
               else if(arr[start]+arr[end]<x){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna