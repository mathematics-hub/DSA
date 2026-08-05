/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	void removeLoop(Node* head) {
		// code here
		unordered_map<Node *, bool> visited;
		Node *curr = head;
		while (curr != NULL) {
			if (visited[curr->next] == 1) {
				curr->next = NULL;
			//	break;
			}
			visited[curr] = 1;
			curr = curr->next;
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna