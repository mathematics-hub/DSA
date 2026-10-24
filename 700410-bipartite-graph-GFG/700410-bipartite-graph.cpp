class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<vector<int>> adjList(V);
        for(int i=0;i<edges.size();i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        vector<int> color(V,-1);
        q.push(0);
        color[0]=0;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(int i=0;i<adjList[temp].size();i++){
                if(color[adjList[temp][i]]==color[temp]){
                    return false;
                }
                if(color[adjList[temp][i]]==-1){
                    q.push(adjList[temp][i]);
                    color[adjList[temp][i]]=(color[temp]==0)?1:0;
                }
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna