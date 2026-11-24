class Solution {
	public:
	void floydWarshall(vector<vector<int>> &dist) {
		// Code here
		int ld = 1e8;
		int V = dist.size();
		for (int k = 0; k<V; k++) {
			for (int i = 0; i<V; i++) {
				for (int j = 0; j<V; j++) {
					if (dist[i][k] != ld && dist[k][j] != ld && dist[i][k]+dist[k][j]<dist[i][j])
						dist[i][j] = dist[i][k]+dist[k][j];
				}
			}
		}
		return;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna