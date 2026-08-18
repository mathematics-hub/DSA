class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        queue<int> q;
        for (int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }
        while (tickets[k] != 0) {
            tickets[q.front()]--;
            time++;
            if (tickets[q.front()] != 0) {
                q.push(q.front());
            }
            q.pop();
        }
        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna