class Solution {
	public:
	bool isBalanced(string& arr) {
		// code here
		stack<char> temp;
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] == '(' || arr[i] == '{' || arr[i] == '[') {
				temp.push(arr[i]);
			}
			else {
				if (!temp.empty() && ((temp.top() == '(' && arr[i] == ')') ||
				(temp.top() == '{' && arr[i] == '}') ||
				(temp.top() == '[' && arr[i] == ']')))
				{
					temp.pop();
				}
				else {
					return false;
				}
			}
		}
		return temp.empty();
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna