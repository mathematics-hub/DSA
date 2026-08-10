class Solution {
	public:
	void reverseArray(vector<int> &arr) {
		// code here
		stack<int> st;
		for (int i = 0; i<arr.size(); i++) {
			st.push(arr[i]);
		}
		int i = 0;
		while (!st.empty()) {
			arr[i] = st.top();
			st.pop();
			i++;
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna