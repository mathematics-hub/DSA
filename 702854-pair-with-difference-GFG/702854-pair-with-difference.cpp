
class Solution {
  public:
    bool findPair(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            int x=target + arr[i];
            int start=i+1,end=n-1,mid;
            while(start<=end){
                mid=(start+end)/2;
                if(arr[mid]==x){
                    return 1;
                }
                else if(x<arr[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
        return 0;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna