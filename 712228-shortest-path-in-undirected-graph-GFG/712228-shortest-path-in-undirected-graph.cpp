class Solution {
	public:
	bool isLexSmaller(vector<int> &parent, int oldParent, int newParent) {
		vector<int> path1; // old path
		while (oldParent != -1) {
			path1.push_back(oldParent);
			oldParent = parent[oldParent];
		}
		
		vector<int> path2; // new path
		while (newParent != -1) {
			path2.push_back(newParent);
			newParent = parent[newParent];
		}
		int i = path1.size() - 1;
		int k = path2.size() - 1;
		while (i >= 0 && k >= 0 && path1[i] == path2[k]) {
			i--; k--;
		}
		if (i<0) {
			return false;
		}
		if (k<0) {
			return true;
		}
		return path1[i]>path2[k];
	}
	vector<int> shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
		// Code here
		vector<vector<pair<int, int>> > adjList(V);
		// all node decrise by 1 include src and dest
		for (int i = 0; i<edges.size(); i++) {
			adjList[edges[i][0]-1].push_back({edges[i][1]-1, edges[i][2]});
			adjList[edges[i][1]-1].push_back({edges[i][0]-1, edges[i][2]});
		}
		src--;
		dest--;
		vector<int> dis(V, INT_MAX);
		vector<int> parent(V, -1);
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > q;
		dis[src] = 0;
		q.push({0, src});
		while (!q.empty()) {
			int d = q.top().first;
			int node = q.top().second;
			q.pop();
			if (d>dis[node]) {// in middle of insert and pop dis update
				continue;
			}
			for (int i = 0; i<adjList[node].size(); i++) {
				int nbd = adjList[node][i].first;
				int wgt = adjList[node][i].second;
				if (dis[nbd]>dis[node]+wgt) {
					dis[nbd] = dis[node]+wgt;
					q.push({dis[nbd], nbd});
					parent[nbd] = node;
				}
				if (dis[nbd] == dis[node]+wgt) {
					// src to nbd old_path
					// src to node new_path
					if (isLexSmaller(parent, nbd, node)) {
						parent[nbd] = node;
					}
				}
			}
		}
		if (dis[dest] == INT_MAX) {// isolated dest
			return {-1};
		}
		vector<int> ans;
		while (dest != -1) {
			ans.push_back(dest + 1);
			dest = parent[dest];
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna