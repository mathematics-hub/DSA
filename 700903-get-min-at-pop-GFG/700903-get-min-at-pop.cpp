stack<int> _push(int arr[], int n) {
	// code here
	stack<int> temp;
	for (int i = 0; i<n; i++) {
		if (i == 0) {
			temp.push(arr[i]);
		}
		else {
			int x = min(temp.top(), arr[i]);
			temp.push(x);
		}
	}
	return temp;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
	
	// code here
	
	while (!s.empty()) {
		cout << s.top()<<" ";
		s.pop();
	}
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna