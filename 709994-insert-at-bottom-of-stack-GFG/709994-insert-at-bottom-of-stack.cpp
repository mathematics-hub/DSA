class Solution {
	public:
	stack<int> insertAtBottom(stack<int> &st, int x) {
		// code here
		stack<int> temp;
		while (!st.empty()) {
			temp.push(st.top());
			st.pop();
		}
		st.push(x);
		while (!temp.empty()) {
			st.push(temp.top());
			temp.pop();
		}
		return st;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna