/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	vector<int> rightView(Node *root) {
		//  code here
		vector<int> ans;
		queue<Node*> q;
		q.push(root);
		while (!q.empty()) {
			int n = q.size();
			ans.push_back(q.back()->data);
			while (n--) {
				Node *temp = q.front();
				q.pop();
				if (temp->left) {
					q.push(temp->left);
				}
				if (temp->right) {
					q.push(temp->right);
				}
			}
		}
		return ans;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna