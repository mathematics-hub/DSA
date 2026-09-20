class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> word;
        string str = "";
        for (int i = 0; i <= s.size(); i++) {
            if (s[i] == ' ' || i == s.size()) {
                word.push_back(str);
                str = "";
            } else {
                str += s[i];
            }
        }
        if (pattern.size() != word.size()) {
            return false;
        }
        map<char, string> charToWord;
        map<string, char> wordToChar;
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = word[i];
            if (charToWord.find(c) != charToWord.end() && charToWord[c] != w) {
                return false;
            }
            if (wordToChar.find(w) != wordToChar.end() && wordToChar[w] != c) {
                return false;
            }
            charToWord[c] = w;
            wordToChar[w] = c;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna