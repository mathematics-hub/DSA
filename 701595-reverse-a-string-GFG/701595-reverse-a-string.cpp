class Solution {
	public:
	string reverseString(string& s) {
		// code here
		int n = s.size();
		int start=0,end=n-1;
		while(start<end){
		    swap(s[start],s[end]);
		    start++;
		    end--;
		}
		return s;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna