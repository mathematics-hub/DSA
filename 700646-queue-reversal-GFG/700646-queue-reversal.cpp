class Solution {
	public:
	void reverseQueue(queue<int> &q) {
		// code here
		stack<int> copy;
		while (!q.empty()) {
			copy.push(q.front());
			q.pop();
		}
		while (!copy.empty()) {
			q.push(copy.top());
			copy.pop();
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna