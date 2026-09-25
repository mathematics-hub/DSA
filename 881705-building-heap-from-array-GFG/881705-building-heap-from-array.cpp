class Solution {
	public:
	void buildHeap(vector<int>& arr) {
		// code here
		int size = arr.size();
		for (int i =1;i<size; i++) {
			int ci = i;
			while (ci>0 && arr[(ci - 1)/2]<arr[ci]) {
				swap(arr[(ci - 1)/2], arr[ci]);
				ci = (ci - 1)/2;
			}
		}
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna