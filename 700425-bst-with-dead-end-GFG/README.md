# [BST with Dead End](https://www.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1)
## Medium
Given a root of Binary Search Tree (BST) containing unique positive integers greater than 0. Find if the BST contains a dead end. A dead end is a leaf node in the BST such that no new node can be inserted in the BST at or below this node while maintaining the BST property and the constraint that all node values must be &gt; 0.
Examples:
Input: root[] = [8, 5, 9, 2, 7, N, N, 1]Output: true
Explanation: Node 1 is a Dead End. We can neither insert 0 as only positives are allowed nor insert 3 (because 3 cannot be inserted as left of 2)
Input: root[] = [8, 7, 10, 2, N, 9, 13]Output: true
Explanation: Node 9 is a Dead End in the given BST.
Constraints:1 ≤ number of nodes ≤ 30001 ≤ node-&gt;data ≤ 105