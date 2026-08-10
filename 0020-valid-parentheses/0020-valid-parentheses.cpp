class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for (int i = 0; i < s.size(); i++) {
            if (temp.empty()) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    temp.push(s[i]);
                } else {
                    return false;
                }
            } else {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    temp.push(s[i]);
                } else if ((temp.top() == '(' && s[i] == ')') ||
                           (temp.top() == '{' && s[i] == '}') ||
                           (temp.top() == '[' && s[i] == ']')) {
                    temp.pop();
                } else {
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