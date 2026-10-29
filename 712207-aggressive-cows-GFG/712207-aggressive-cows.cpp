class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k)
{
    // code here
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int start = 1, end = stalls[n - 1] - stalls[0], mid, ans;
    while (start <= end)
    {
        mid = (start + end) / 2;
        int cow = 1, position = stalls[0];
        for (int i = 1; i < n; i++)
        {
            if (position + mid <= stalls[i])
            {
                cow++;
                position = stalls[i];
            }
        }
        if (cow < k)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna