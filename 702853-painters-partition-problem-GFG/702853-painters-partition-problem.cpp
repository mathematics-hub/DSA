class Solution
{
public:
    int minTime(vector<int> &arr, int k)
    {
        // code here
        int start = INT_MIN, end = 0, mid, n = arr.size(), ans;
        for (int i = 0; i < n; i++)
        {
            start = max(start, arr[i]);
            end = end + arr[i];
        }
        while (start <= end)
        {
            mid = (start + end) / 2;
            int painter = 1, size = 0;
            for (int i = 0; i < n; i++)
            {
                size = size + arr[i];
                if (size > mid)
                {
                    painter++;
                    size = arr[i];
                }
            }
            if (painter <= k)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna