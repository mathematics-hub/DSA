/* Structure of a Binary Search Tree node
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
}; */

class Solution {
	public:
	vector<int> merge(Node *r1, Node *r2) {
		// code here
		stack<Node *> st1, st2;
		vector<int> ans;
		while (r1) {
			st1.push(r1);
			r1 = r1->left;
		}
		while (r2) {
			st2.push(r2);
			r2 = r2->left;
		}
		while (!st1.empty() && !st2.empty()) {
			Node *temp1 = st1.top();
			Node *temp2 = st2.top();
			if (temp1->data<=temp2->data) {
				ans.push_back(temp1->data);
				st1.pop();
				r1 = temp1->right;
			}
			else if (temp1->data>temp2->data) {
				ans.push_back(temp2->data);
				st2.pop();
				r2 = temp2->right;
			}
			while (r1) {
				st1.push(r1);
				r1 = r1->left;
			}
			while (r2) {
				st2.push(r2);
				r2 = r2->left;
			}
		}
		while (!st1.empty()) {
			ans.push_back(st1.top()->data);
			r1 = st1.top()->right;
			st1.pop();
			while (r1) {
				st1.push(r1);
				r1 = r1->left;
			}
		}
		while (!st2.empty()) {
			ans.push_back(st2.top()->data);
			r2 = st2.top()->right;
			st2.pop();
			while (r2) {
				st2.push(r2);
				r2 = r2->left;
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna