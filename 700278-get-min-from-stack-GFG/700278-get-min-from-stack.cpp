class SpecialStack {
	public:
	SpecialStack() {
		// Define Stack
		// 		stack<int> st1;
		// 		stack<int> st2;
	}
	stack<int> st1;
	stack<int> st2;
	void push(int x) {
		// Add an element to the top of Stack
		if (st1.empty()) {
			st1.push(x);
			st2.push(x);
		}
		else {
			st1.push(x);
			st2.push(min(x, st2.top()));
		}
	}
	
	void pop() {
		// Remove the top element from the Stack
		st1.pop();
		st2.pop();
	}
	
	int peek() {
		// Returns top element of the Stack
		if (st1.empty()) {
			return - 1;
		}
		return st1.top();
	}
	
	bool isEmpty() {
		// Check if stack is empty
		return st1.empty();
	}
	
	int getMin() {
		// Finds minimum element of Stack
		if (st1.empty()) {
			return - 1;
		}
		return st2.top();
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna