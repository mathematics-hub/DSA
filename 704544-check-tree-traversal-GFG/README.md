# [Check Tree Traversal](https://www.geeksforgeeks.org/problems/check-tree-traversal--141628/1)
## Hard
Given three arrays preorder[], inorder[], and postorder[] representing the preorder, inorder, and postorder traversals of a binary tree with unique node values, determine whether all three traversals correspond to the same binary tree.
Examples:
Input: preorder[] = [1, 2, 4, 5, 3], inorder[] = [4, 2, 5, 1, 3], postorder[] = [4, 5, 2, 3, 1]
Output: true
Explanation: All three traversals represent the same binary tree: &nbsp; &nbsp;Preorder  : 1 2 4 5 3
Inorder    : 4 2 5 1 3
Postorder : 4 5 2 3 1

Input: preorder[] = [1, 5, 4, 2, 3], inorder[] = [4, 2, 5, 1, 3], postorder[] = [4, 1, 2, 3, 5]
Output: false
Explanation: There does not exist any binary tree whose preorder, inorder, and postorder traversals match all the given arrays simultaneously.
Constraints:1 ≤ Number of Nodes ≤ 103All node values are unique.