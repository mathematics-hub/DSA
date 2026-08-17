class node {
	public:
	int val;
	node *next;
	node(int x) {
		val = x;
		next = NULL;
	}
};

class kStacks {
	
	// main array to store elements
	int *arr;
	node **top;
	
	public:
	kStacks(int n, int k) {
		// initialize data structures for k stacks
		arr = new int[n];
		top = new node*[k];
		for (int i = 0 ; i<k ; i++) {
			top[i] = NULL;
		}
	}
	
	void push(int x, int i) {
		// push element x into stack i
		node *temp = new node(x);
		temp->next = top[i];
		top[i] = temp;
	}
	
	int pop(int i) {
		// pop element from stack i
		if (top[i] == NULL) {
			return - 1;
		}
		int rtn = top[i]->val;
		node *temp = top[i];
		top[i] = top[i]->next;
		delete temp;
		return rtn;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna