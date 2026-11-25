class Solution {
  public:
    int primMST(vector<vector<vector<int>>> &adj) {
      // code here
      int n = adj.size();
      vector<bool> visit(n, 0);
      priority_queue<pair<int, int>, vector<pair<int, int>>,
                     greater<pair<int, int>>>
          q;
      q.push({0, 0});
      int count = 0;
      while (!q.empty()) {
        int wgt = q.top().first;
        int node = q.top().second;
        q.pop();
        if (visit[node])
          continue;
        visit[node] = 1;
        count += wgt;
        for (int i = 0; i < adj[node].size(); i++) {
          if (visit[adj[node][i][0]] == 0) {
            q.push({adj[node][i][1], adj[node][i][0]});
          }
        }
      }
      return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna