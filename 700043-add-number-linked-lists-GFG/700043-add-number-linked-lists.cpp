/*
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

class Solution {
	public:
	Node* addTwoNumbers(Node* l1, Node* l2) {
		Node *head = new Node(0), *tail = head;
		int carry = 0;
		while (l1 || l2 || carry) {
			int x = (l1 != NULL) ? l1->data : 0;
			int y = (l2 != NULL) ? l2->data : 0;
			int sum = x + y + carry;
			carry = sum / 10;
			tail->next = new Node(sum % 10);
			tail = tail->next;
			if (l1 != NULL)
				l1 = l1->next;
			if (l2 != NULL)
				l2 = l2->next;
		}
		Node* temp = head;
		head = head->next;
		delete temp;
		return head;
	}
	Node *reverse(Node *curr, Node *prev) {
		if (curr == NULL) {
			return prev;
		}
		Node *temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
		return	reverse(curr, prev);
	}
	Node* addTwoLists(Node* head1, Node* head2) {
		// code here
		head1 = reverse(head1, NULL);
		head2 = reverse(head2, NULL);
		Node *head = addTwoNumbers(head1, head2);
		head = reverse(head, NULL);
		while (head->data == 0) {
			if (head->next == NULL && head->data == 0) {
				return head;
			}
			Node* temp = head;
			head = head->next;
			delete temp;
		}
		return head;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna