/* Linked List Node Structure
class Node {
	public:
	int data;
	Node* next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Compare {
	public:
	bool operator()(Node *a, Node *b) {
		return a->data>b->data;
	}
};
class Solution {
	public:
	Node* mergeKLists(vector<Node*>& arr) {
		// code here
		priority_queue<Node *, vector<Node*>, Compare>q(arr.begin(), arr.end());
		
		Node *head = new Node(0);
		Node *tail = head;
		while (!q.empty()) {
			Node *temp = q.top();
			q.pop();
			tail->next = new Node(temp->data);
			tail = tail->next;
			if (temp->next)
				q.push(temp->next);
		}
		return head->next;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna