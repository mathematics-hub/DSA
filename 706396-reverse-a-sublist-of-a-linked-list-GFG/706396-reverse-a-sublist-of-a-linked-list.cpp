/* Structure of a Linked List Node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	Node* reverseBetween(int a, int b, Node* head) {
		// code here
		Node *dummy = new Node(0);
		dummy->next = head;
		head = dummy;
		Node *first = head;
		for (int i = 1; i<a; i++) {
			first = first->next;
		}
		Node *curr = first->next;
		Node *prev = NULL;
		while (a <= b) {
			Node *temp = curr->next;
			curr->next = prev;
			prev = curr;
			curr = temp;
			a++;
		}
		first->next = prev;
		
		Node *tail = first->next;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = curr;
		
		Node *temp = head;
		head = head->next;
		delete temp;
		return head;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna