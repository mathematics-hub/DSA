/* A binary tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};
*/

class Solution {
	public:
	void traverse(Node *root, vector<int> &path, int a, vector<int> &pathA, int b, vector<int> &pathB) {
		if (root == NULL) {
			return;
		}
		path.push_back(root->data);
		if (root->data == a) {
			pathA = path;
		}
		if (root->data == b) {
			pathB = path;
		}
		traverse(root->left, path, a, pathA, b, pathB);
		traverse(root->right, path, a, pathA, b, pathB);
		path.pop_back();
	}
	int findDist(Node* root, int a, int b) {
		// code here
		vector<int> path;
		vector<int> pathA;
		vector<int> pathB;
		traverse(root, path, a, pathA, b, pathB);
		int i = 0;
		while (i<min(pathA.size(), pathB.size()) && pathA[i] == pathB[i]) {
			i++;
		}
		return pathA.size() - i + pathB.size() - i;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna