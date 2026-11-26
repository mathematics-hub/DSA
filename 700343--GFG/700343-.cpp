class Solution {
  public:
    int primMST(vector<vector<vector<int>>> &adj) {
      // code here
      int V = adj.size();
      vector<int> visit(V, 0);
      priority_queue<pair<int, int>, vector<pair<int, int>>,
                     greater<pair<int, int>>>
          q; // wgt,node
      q.push({0, 0});
      int count = 0;
      while (!q.empty()) {
        int wgt = q.top().first;
        int node = q.top().second;
        q.pop();
        if (visit[node]) {
          continue;
        }
        visit[node] = 1;
        count += wgt;

        for (int i = 0; i < adj[node].size(); i++) {
          int nbd = adj[node][i][0];
          int w = adj[node][i][1];
          if (visit[nbd] == 0) {
            q.push({w, nbd});
          }
        }
      }
      return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna