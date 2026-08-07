# [Reverse a sublist of a linked list](https://www.geeksforgeeks.org/problems/reverse-a-sublist-of-a-linked-list/1)
## Hard
Given a singly linked list and two positions a and b, reverse the nodes of the linked list from position a to b (1-indexed) and return the head of the modified linked list. The reversal must be done in-place without using extra space for another list.
Examples:
Input: a = 2, b = 4, head = 1-&gt;3-&gt;5-&gt;4-&gt;9-&gt;8-&gt;10-&gt;NULL Output:Explanation: Nodes from position 3 to 4 are reversed resulting in 1 4 5 3 9 8 10.
Input: a = 1, b = 8, head = 1-&gt;7-&gt;5-&gt;3-&gt;9-&gt;8-&gt;10-&gt;2-&gt;2-&gt;5-&gt;NULLOutput: Explanation: The nodes from position 1 to 8 are reversed, resulting in 2 10 8 9 3 5 7 1 2 5.
Constraints:
1 ≤ size of linked list ≤ 10^5
1 ≤ a ≤ b ≤ size of linked list
1 ≤ data of nodes ≤ 109