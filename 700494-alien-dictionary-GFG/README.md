# [Alien Dictionary](https://www.geeksforgeeks.org/problems/alien-dictionary/1)
## Hard
An alien language uses the lowercase English alphabet, but the order of its letters is unknown. You are given an array of strings words[] that is claimed to be sorted lexicographically according to the rules of the alien language.
Determine the order of the letters in the alien alphabet. 

If a valid ordering exists, return a string containing all unique letters in lexicographical order according to the alien language. 
Otherwise, return an empty string. 

If a string s1 is lexicographically smaller than a string s2, and the first position at which they differ contains letter a in s1 and letter b in s2, then a must appear before b in the alien alphabet.If one word is a prefix of the other, the shorter word must appear before the longer word.
Note: The driver code prints true if the returned order is valid; otherwise, it prints false.
Examples:
Input: words[] = ["baa", "abcd", "abca", "cab", "cad"]Output: trueExplanation: A possible correct order of letters in the alien dictionary is "bdac".The pair "baa" and "abcd" suggests 'b' appears before 'a' in the alien dictionary.
The pair "abcd" and "abca" suggests 'd' appears before 'a' in the alien dictionary.
The pair "abca" and "cab" suggests 'a' appears before 'c' in the alien dictionary.
The pair "cab" and "cad" suggests 'b' appears before 'd' in the alien dictionary.
So, 'b' -&gt; 'd' -&gt; 'a' -&gt; 'c' is a valid ordering.
Input: words[] = ["caa", "aaa", "aab"]Output: trueExplanation: A possible correct order of letters in the alien dictionary is "cab".The pair "caa" and "aaa" suggests 'c' appears before 'a'.The pair "aaa" and "aab" suggests 'a' appear before 'b' in the alien dictionary. So, 'c' -&gt; 'a' -&gt; 'b' is a valid ordering.
Input: words[] = ["ab", "cd", "ef", "ad"]Output: ""Explanation: No valid ordering of letters is possible.The pair "ab" and "ef" suggests "a" appears before "e".The pair "ef" and "ad" suggests "e" appears before "a", which contradicts the ordering rules.
Constraints:1&nbsp;≤ words.size() * words[i].size()&nbsp;&nbsp;≤ 106words[i] consists only of lowercase English letters.