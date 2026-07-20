class Solution {
public:
    void reverse(vector<vector<int>>& grid, int start, int end) {
        int col = grid[0].size();
        while (start < end) {
            int i1 = start / col, j1 = start % col;
            int i2 = end / col, j2 = end % col;
            swap(grid[i1][j1], grid[i2][j2]);
            start++;
            end--;
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        k = k % (m * n);
        if (m == 1 && n == 1)
            return grid;
        reverse(grid, 0, m * n - 1);
        reverse(grid, 0, k - 1);
        reverse(grid, k, m * n - 1);
        return grid;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna