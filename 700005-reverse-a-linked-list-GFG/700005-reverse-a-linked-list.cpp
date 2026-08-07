/* Structure of Linked List Node
class Node {
	public:
	int data ;
	Node *next ;
	
	Node(int x) {
		data = x ;
		next = nullptr ;
	}
};
*/

class Solution {
	public:
	Node *reverse(Node *curr, Node *prev) {
		if (curr == NULL) {
			return prev;
		}
		Node *temp = curr->next;
		curr->next = prev;
		return reverse(temp, curr);
	}
	Node* reverseList(Node* head) {
		// code here
		return reverse(head, NULL);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna