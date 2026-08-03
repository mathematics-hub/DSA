/* Link list Node
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x) {
		data = x;
		next = NULL;
	}
	
};
*/
class Solution {
	public:
	bool checked(vector<Node *> visited, Node *cur)
	{
		for (auto val : visited)
			{
			if (val == cur)
				{
				return true;
			}
		}
		return false;
	}
	bool isCircular(Node *head) {
		// code here
		Node* curr = head;
		vector<Node*> visited;
		while (curr != NULL) {
			if (checked(visited, curr)) {
				return true;
			}
			visited.push_back(curr);
			curr = curr->next;
		}
		return false;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna