/* Binary Tree Node Structure
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int data) {
		this->data = data;
		left = nullptr;
		right = nullptr;
	}
};
*/
class Solution {
	public:
	vector<int> largestValues(Node* root) {
		// code here
		vector<int> ans;
		queue<Node *> q;
		q.push(root);
		q.push(NULL);
		int maxelement = INT_MIN;
		while (q.size() != 1) {
			if (q.front() != NULL) {
				Node *temp = q.front();
				maxelement = max(maxelement, temp->data);
				if (temp->left) {
					q.push(temp->left);
				}
				if (temp->right) {
					q.push(temp->right);
				}
				q.pop();
			}
			if (q.front() == NULL) {
				ans.push_back(maxelement);
				q.pop();
				q.push(NULL);
				maxelement = INT_MIN;
			}
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna