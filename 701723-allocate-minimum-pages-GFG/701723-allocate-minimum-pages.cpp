class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(n<k){
            return -1;
        }
        int start=INT_MIN,end=0;
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        for(int min_page=start;min_page<=end;min_page++){
            int std=1,page=0;
            for(int i=0;i<n;i++){
                page+=arr[i];
                if(page>min_page){
                    std++;
                    page=arr[i];
                }
            }
            if(std<=k){
                return min_page;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna