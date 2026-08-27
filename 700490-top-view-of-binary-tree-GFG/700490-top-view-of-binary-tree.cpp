/*
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
	void position(Node *root, int curr, int &l, int &r) {
		if (root == NULL) {
			return ;
		}
		l = min(l, curr);
		r = max(r, curr);
		position(root->left, curr - 1, l, r);
		position(root->right, curr + 1, l, r);
	}
	vector<int> topView(Node *root) {
		// code here
		int curr = 0, l = 0, r = 0;
		position(root, curr, l, r);
		vector<int> ans(r - l + 1);
		vector<bool> track(r - l + 1, false);
		queue<Node *>q;
		queue<int> index;
		q.push(root);
		index.push(-l);
		while (!q.empty()) {
			Node *temp = q.front();
			q.pop();
			int i = index.front();
			index.pop();
			if (track[i] == 0) {
				track[i] = 1;
				ans[i] = temp->data;
			}
			if (temp->left) {
				q.push(temp->left);
				index.push(i - 1);
			}
			if (temp->right) {
				q.push(temp->right);
				index.push(i + 1);
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna