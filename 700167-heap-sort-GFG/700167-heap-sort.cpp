// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

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
	void buildMaxHeap(vector<int> &arr, int n) {
		for (int i = n/2 - 1; i >= 0; i--) {
			heapify(arr, i, n);
		}
	}
	void sortArray(vector<int> &arr, int n) {
		for (int i = n - 1; i >= 0; i--) {
			swap(arr[0], arr[i]);
			heapify(arr, 0, i);
		}
	}
	// Function to sort an array using Heap Sort.
	void heapSort(vector<int>& arr) {
		// code here
		int n = arr.size();
		buildMaxHeap(arr, n);
		sortArray(arr, n);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna