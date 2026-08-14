class Solution {
	public:
	int celebrity(vector<vector<int>> & mat) {
		// code here
		int n = mat.size();
		stack<int> temp;
		for (int i = 0; i<n; i++) {
			temp.push(i);
		}
		while (!temp.empty() && temp.size() != 1) {
			int i = temp.top();
			temp.pop();
			int j = temp.top();
			temp.pop();
			if (mat[i][j] == 1 && mat[j][i] == 1) {
				continue;
			}
			else if (mat[i][j] == 0 && mat[j][i] == 0) {
				continue;
			}
			else if (mat[i][j] == 1 && mat[j][i] == 0) {
				temp.push(j);
			}
			else if (mat[i][j] == 0 && mat[j][i] == 1) {
				temp.push(i);
			}
		}
		if (temp.empty()) {
			return - 1;
		}
		int index = temp.top();
		bool flag = true;
		for (int j = 0; j<n; j++) {
			if (index != j && mat[index][j] == 1) {
				flag = false;
				break;
			}
		}
		if (flag == false) {
			return - 1;
		}
		for (int i = 0; i<n; i++) {
			if (mat[i][index] == 0) {
				flag = false;
				break;
			}
		}
		if (flag == false) {
			return - 1;
		}
		return index;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna