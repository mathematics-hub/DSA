/* Structure for Link list node
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
	Node* deleteK(Node* head, int K) {
		// code here
		int count = 1;
		Node *cur = head, *pre = NULL;
		while (cur != NULL) {
			if (count == K) {
				pre->next = cur->next;
				delete cur;
				cur = pre->next;
				count = 1;
			}
			else {
				pre = cur;
				cur = cur->next;
				count++;
			}
		}
		return head;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna