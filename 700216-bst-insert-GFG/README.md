# [BST Insert](https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1)
## Easy
Given a root of Binary Search Tree (BST) and an integer key, insert a new node with value key into the BST. Return the root of the modified tree after the insertion.
Note:&nbsp;If the key is already present in the BST, return the root.
Examples :
Input: root = [2, 1, 3], key = 4
Output: [2, 1, 3, N, N, N, 4]
Explanation: After inserting the node 4, the new tree will be [2, 1, 3, N, N, N, 4].

Input: root = [2, 1, 3, N, N, N, 6], key = 4Output: [2, 1, 3, N, N, N, 6, 4]
Explanation: After inserting the node 4, the new tree will be [2, 1, 3, N, N, N, 6, 4].