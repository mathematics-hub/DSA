class Solution {
public:
    int winner(vector<bool>& person, int index, int n, int k, int lp) {
        if (lp == 1) {
            return index + 1;
        }
        int count = 0;
        while (true) {
            if (person[index] == 0) {
                count++;
            }
            if (count == k) {
                break;
            }
            index = (index + 1) % n;
        }
        person[index] = 1;
        while (person[index] == 1) {
            index = (index + 1) % n;
        }
        return winner(person, index, n, k, lp - 1);
    }
    int findTheWinner(int n, int k) {
        vector<bool> present(n, 0);
        int leftPerson = n, index = 0;
        return winner(present,index,n,k,leftPerson);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna