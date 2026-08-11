# [Print Bracket Number](https://www.geeksforgeeks.org/problems/print-bracket-number4058/1)
## Easy
Given a string s, the task is to find the bracket numbers, i.e., for each bracket in s, return i if the bracket is the ith opening or closing bracket&nbsp;to appear in the string.&nbsp;
Note :&nbsp;s contains lowercase English alphabets, and '(', ')' characters at any index, the number of opening brackets is greater than or equal to closing brackets
&nbsp;Examples:
Input:  s = "(aa(bdc))p(dee)"
Output: 1 2 2 1 3 3
Explanation: The highlighted brackets in
the given string (aa(bdc))p(dee) are
assigned the numbers as: 1 2 2 1 3 3.
Input:  s = "(((()("
Output: 1 2 3 4 4 5
Explanation: The highlighted brackets in
the given string (((()( are assigned
the numbers as: 1 2 3 4 4 5
Constraints:1 ≤ |s| ≤ 105