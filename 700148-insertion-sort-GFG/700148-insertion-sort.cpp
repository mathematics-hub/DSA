class Solution
{
public:
    void insertionSort(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            int j = i - 1, key = arr[i];
            while (key < arr[j] && j >= 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }
};

/*
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=1;i<n;i++){
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                }
                else{
                    break;
                }
            }
        }
    }
};
*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna