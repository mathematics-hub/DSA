/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* deleteNode(Node* head, int x) {
		// code here
		if (head != nullptr) {
			if (x == 1) {
				Node *temp = head;
				head = head->next;
				delete temp;
			}
			else {
				Node *temp = head;
				for (int i = 1; i<x - 1; i++) {
					temp = temp->next;
				}
				Node *ptr = temp->next;
				temp->next = temp->next->next;
				delete ptr;
			}
		}
		return head;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna