class Solution {
  public:
    void DFS(vector<vector<int>> &adj, int src, vector<bool> &visit) {
      visit[src] = 1;
      for (int i = 0; i < adj[src].size(); i++) {
        if (visit[adj[src][i]] == 0) {
          DFS(adj, adj[src][i], visit);
        }
      }
    }
    int isEulerCircuit(vector<vector<int>> &adj) {
      // code here
      int V = adj.size();
      vector<int> indegree(V, 0);
      int odddegree = 0;
      for (int i = 0; i < V; i++) {
        indegree[i] = adj[i].size();
        if (indegree[i] % 2 != 0) {
          odddegree++;
        }
      }
      //   if (odddegree != 0 && odddegree != 2) {
      //     return 0;
      //   }
      if (odddegree > 2) {
        return 0;
      }
      vector<bool> visit(V, 0);
      for (int src = 0; src < V; src++) {
        if (indegree[src]) {
          DFS(adj, src, visit);
          break;
        }
      }
      for (int i = 0; i < V; i++) {
        if (indegree[i] && visit[i] == 0) {
          return 0;
        }
      }
      if (odddegree) {
        return 1;
      }
      return 2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna