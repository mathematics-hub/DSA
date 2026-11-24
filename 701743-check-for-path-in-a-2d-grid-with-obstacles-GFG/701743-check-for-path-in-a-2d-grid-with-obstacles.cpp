class Solution {
  public:
    bool isPathPossible(vector<vector<int>> &mat) {
      // code here
      int n = mat.size();
      // finding index of 1
      int i, j;
      for (i = 0; i < n; i++) {
        bool flag = 0;
        for (j = 0; j < n; j++) {
          if (mat[i][j] == 1) {
            flag = 1;
            break;
          }
        }
        if (flag)
          break;
      }
      // traverse grid
      queue<vector<int>> q;
      q.push({i, j});
      mat[i][j] = 0;
      while (!q.empty()) {
        int r = q.front()[0];
        int c = q.front()[1];
        q.pop();
        int row[] = {-1, 1, 0, 0};
        int col[] = {0, 0, -1, 1};
        for (int k = 0; k < 4; k++) {
          int nr = r + row[k];
          int nc = c + col[k];
          if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
            if (mat[nr][nc] == 2)
              return true;
            if (mat[nr][nc] == 3) {
              q.push({nr, nc});
              mat[nr][nc] = 0;
            }
          }
        }
      }
      return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna