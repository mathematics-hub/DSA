/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node* bottom;
	
	Node(int x) {
		data = x;
		next = nullptr;
		bottom = nullptr;
	}
}; */

class Solution {
	public:
	Node *merge(Node *head1, Node *head2)
	{
		Node *head = new Node(0);
		Node *tail = head;
		while (head1 && head2)
			{
			if (head1->data <= head2->data)
				{
				tail->bottom = head1;
				head1 = head1->bottom;
			}
			else
				{
				tail->bottom = head2;
				head2 = head2->bottom;
			}
			tail = tail->bottom;
			tail->bottom = NULL;
		}
		if (head1)
			{
			tail->bottom = head1;
		}
		if (head2)
			{
			tail->bottom = head2;
		}
		return head->bottom;
	}
	void mergelist(vector<Node*> &lists, int start, int end) {
		if (start >= end) {
			return;
		}
		int mid = (start + end)/2;
		mergelist(lists, start, mid);
		mergelist(lists, mid + 1, end);
		lists[start] = merge(lists[start], lists[mid + 1]);
	}
	Node* flatten(Node* head) {
		// code here
		Node *temp = head;
		vector<Node*>lists;
		while (temp) {
			lists.push_back(temp);
			temp = temp->next;
		}
		mergelist(lists, 0, lists.size() - 1);
		return lists[0];
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna