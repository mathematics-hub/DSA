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
	void width(Node *root, int pos, int &l, int &r) {
		if (root == NULL) {
			return;
		}
		l = min(l, pos);
		r = max(r, pos);
		width(root->left, pos - 1, l, r);
		width(root->right, pos + 1, l, r);
	}
	vector<int> topView(Node *root) {
		// code here
		int pos = 0, l = 0, r = 0;
		width(root, pos, l, r);
		vector<int> ans(r - l + 1);
		vector<bool> track(r - l + 1, false);
		queue<Node* > q;
		queue<int> index;
		q.push(root);
		index.push(-l);
		while (!q.empty()) {
			Node *temp = q.front();
			q.pop();
			int i = index.front();
			index.pop();
			if (track[i] == false) {
				track[i] = true;
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