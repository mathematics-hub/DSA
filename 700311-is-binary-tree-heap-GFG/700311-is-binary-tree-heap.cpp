/*
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = NULL;
	}
};
*/

class Solution {
	public:
	bool CBT(Node*root) {
		queue<Node *> q;
		q.push(root);
		bool nullSeen = false;
		while (!q.empty()) {
			Node *temp = q.front();
			q.pop();
			if (temp == NULL) {
				nullSeen = true;
			}
			else {
				if (nullSeen) {
					return false;
				}
				q.push(temp->left);
				q.push(temp->right);
			}
		}
		return true;
	}
	int totalNode(Node *root) {
		if (root == NULL) {
			return 0;
		}
		return 1 + totalNode(root->left) + totalNode(root->right);
	}
	bool maxHeap(Node *root) {
		if (root == NULL) {
			return true;
		}
		if (root->left != NULL && root->left->data>root->data) {
			return false;
		}
		if (root->right != NULL && root->right->data>root->data) {
			return false;
		}
		return maxHeap(root->left) && maxHeap(root->right);
	}
	bool isHeap(Node* root) {
		// code here
		int num = totalNode(root);
		bool ans = CBT(root);
		if (ans == false) {
			return 0;
		}
		return maxHeap(root);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna