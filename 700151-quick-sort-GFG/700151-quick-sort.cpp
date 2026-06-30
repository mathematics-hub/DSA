class Solution {
	public:
	void quickSort(vector<int>& arr, int low, int high) {
		// code here
		if (low >= high) {
			return;
		}
		int k = partition(arr, low, high);
		quickSort(arr, low, k - 1);
		quickSort(arr, k + 1, high);
	}
	
	public:
	int partition(vector<int>& arr, int low, int high) {
		int pivote = arr[high];
		int count = 0;
		for (int i = low; i <= high-1; i++) {
			if (arr[i] <= pivote)
				{
				count++;
			}
		}
		vector<int> temp(high - low + 1);
		temp[count] = pivote;
		int left = 0, right = count + 1;
		for (int i = low; i <= high-1; i++) {
			if (arr[i] <= pivote) {
				temp[left++] = arr[i];
			}
			else {
				temp[right++] = arr[i];
			}
		}
		int j = low;
		for (int i = 0; i<temp.size(); i++) {
			arr[j] = temp[i];
			j++;
		}
		return low + count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna