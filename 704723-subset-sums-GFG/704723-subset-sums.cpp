class Solution {
  public:
  void subset_sum(vector<int>&nums,int index,int n,vector<int> &temp,vector<int> &result){
      if(index==n){
          int sum=0;
          for(int val:temp){
              sum+=val;
          }
          result.push_back(sum);
          return;
      }
      subset_sum(nums,index+1,n,temp,result);
      temp.push_back(nums[index]);
      subset_sum(nums,index+1,n,temp,result);
      temp.pop_back();
  }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> temp,result;
        subset_sum(arr,0,arr.size(),temp,result);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna