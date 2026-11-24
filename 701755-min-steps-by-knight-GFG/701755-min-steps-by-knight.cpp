class Solution {
  public:
    int minStepToReachTarget(vector<int> &knightPos, vector<int> &targetPos,
                             int n) {
      // Code here
      if (knightPos == targetPos) {
        return 0;
      }
      vector<vector<bool>> board(n, vector<bool>(n, 1));
      queue<vector<int>> q;
      q.push({knightPos[0] - 1, knightPos[1] - 1, 0});
      board[knightPos[0] - 1][knightPos[1] - 1] = 0;
      while (!q.empty()) {
        int r = q.front()[0];
        int c = q.front()[1];
        int step = q.front()[2];
        q.pop();
        int row[] = {-2, -2, 2, 2, -1, 1, -1, 1};
        int col[] = {-1, 1, -1, 1, -2, -2, 2, 2};
        for (int k = 0; k < 8; k++) {
          int nr = r + row[k];
          int nc = c + col[k];
          if (nr >= 0 && nr < n && nc >= 0 && nc < n && board[nr][nc]) {
            if (nr == targetPos[0] - 1 && nc == targetPos[1] - 1) {
              return step + 1;
            }
            q.push({nr, nc, step + 1});
            board[nr][nc] = 0;
          }
        }
      }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna