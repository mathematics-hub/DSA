class Solution {
  public:
    bool BFS(vector<vector<int>> &adj, int curr, int prev, vector<bool> &visit)
    {
        queue<pair<int, int>> q;
        q.push({curr, prev});
        visit[curr] = true;
        while (!q.empty())
        {
            int present = q.front().first;
            int previous = q.front().second;
            q.pop();
            for (int i = 0; i < adj[present].size(); i++)
            {
                if (adj[present][i] != previous && visit[adj[present][i]] == 1)
                {
                    return true;
                }
                if (visit[adj[present][i]] == 0)
                {
                    visit[adj[present][i]] = 1;
                    q.push({adj[present][i], present});
                }
            }
        }
        return false;
    }
    bool isCycle(vector<vector<int>> &edges)
    {
        // Code here
        int V=edges.size();
        vector<bool> visit(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (visit[i] == 0 && BFS(edges, i, -1, visit))
            {
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna