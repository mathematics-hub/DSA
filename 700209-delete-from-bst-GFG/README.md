# [Delete from BST](https://www.geeksforgeeks.org/problems/delete-a-node-from-bst/1)
## Medium
Given a binary search tree and a node value x. Delete the node with the given value x from the tree. If no node with value x exists, then do not make any change.&nbsp;
Return the root of the tree after deleting the node with value x.
Note:&nbsp;You may return any valid BST after deleting the specified node. The driver code will print true if the resulting tree is a valid BST after deletion, and false otherwise.
Examples :
Input: root = [2, 1, 3], x = 12
Output: true
Explanation: In the given input there is no node with value 12, so the tree will remain same.
Input: root = [1, N, 2, N, 8, 5, 11, 4, 7, 9, 12], x = 11
Output: trueExplanation: In the given input, one of the possible tree after deleting 11 will be

Input: root = [2, 1, 3], x = 3Output: [2, 1]Explanation: In the given input, only possible tree after deleting 3 will be
