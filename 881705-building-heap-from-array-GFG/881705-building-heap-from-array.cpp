class Solution {
	public:
	void heapify(vector<int> &arr, int index, int n) {
		int largest = index;
		int left = 2*index + 1;
		int right = 2*index + 2;
		if (left<n && arr[left]>arr[largest]) {
			largest = left;
		}
		if (right<n && arr[right]>arr[largest]) {
			largest = right;
		}
		if (largest != index) {
			swap(arr[largest], arr[index]);
			heapify(arr, largest, n);
		}
	}
	void buildHeap(vector<int>& arr) {
		// code here
		int size = arr.size();
		for (int i = size/2 - 1; i >= 0; i--) {
			heapify(arr, i, size);
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna