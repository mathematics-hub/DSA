/*
class Node {
	public:
	int data;
	Node *next;
	
	Node(int x) {
		data = x;
		next = NULL;
	}
};
*/

class Solution {
	public:
	Node* sortedMerge(Node* head1, Node* head2) {
		// code here
		Node *head = new Node(0), *tail = head;
		while (head1 && head2) {
			if (head1->data <= head2->data) {
				tail->next = head1;
				head1 = head1->next;
			}
			else {
				tail->next = head2;
				head2 = head2->next;
			}
			tail = tail->next;
			tail->next = NULL;
		}
		if (head1) {
			tail->next = head1;
		}
		else {
			tail->next = head2;
		}
		Node *temp = head;
		head = head->next;
		delete temp;
		return head;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna