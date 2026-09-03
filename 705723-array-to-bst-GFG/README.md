# [Array to BST](https://www.geeksforgeeks.org/problems/array-to-bst4443/1?page=1&difficulty%5B%5D=0&category%5B%5D=Binary%2520Search%2520Tree&sortBy=submissions)
## Medium
Given a sorted array arr[]. Convert it into a Height Balanced Binary Search Tree (BST) and return the root of the BST.
Height-balanced BST means a binary tree in which the depth of the left subtree and the right subtree of every node never differ by more than 1.
Note: You can return any BST, the driver code will check the BST, and print true if it is a Height-balanced BST else print&nbsp;false.
Examples :
Input: arr[] = [10, 20, 30]
Output: true
Explanation: Only possible Height Balanced BST will be [20, 10, 30] 
Input: arr[] = [1, 5, 9, 14, 23, 27]
Ouput: true
Explanation: One of the possible Height Balanced BST will be [9, 1, 23, N, 5, 14, 27]
Constraints:1 ≤ arr.size() ≤ 1051 ≤ arr[i] ≤ 105