/* Structure of linked list Node
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
	Node *reverseKGroup(Node *head, int k) {
		// code here
		Node *dummy = new Node(0);
		dummy->next = head;
		head = dummy;
		
		Node *first = head;
		while (1) {
			Node *curr = first->next;
			Node *prev = NULL;
			int num = k;
			while (num && curr) {
				Node *temp = curr->next;
				curr->next = prev;
				prev = curr;
				curr = temp;
				num--;
			}
			first->next = prev;
			
			Node *tail = first->next;
			while (tail->next != NULL) {
				tail = tail->next;
			}
			tail->next = curr;
			if (curr == NULL) {
				break;
			}
			first = tail;
		}
		return head->next;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna