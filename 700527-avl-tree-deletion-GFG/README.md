# [AVL Tree Deletion](https://www.geeksforgeeks.org/problems/avl-tree-deletion/1)
## Hard
Given the root of an AVL tree and an integer key, delete the given key from the AVL tree and return the root of the modified tree.
 
After deleting the node, ensure that the tree continues to satisfy the properties of an AVL tree by performing the necessary rotations.
Examples:
Input: root= [4, 2, 6, 1, 3, 5, 7], key = 4
   Output:  Explanation: The node with value 4 has two children. To delete such a node, replace it with its inorder successor, which is 5 (the smallest node in the right subtree). Then, delete the original node 5 from the right subtree. After deletion, the tree remains balanced, so no rotations are required. The resulting AVL tree is shown above.
Input: root= [9, 5, 10, 2, 6, N, 12, 1, 3], key= 10Output:Explanation: Delete node 10 and replace it with its only child 12. After deletion, node 9 becomes unbalanced with a balance factor of +2. Since the balance factor of its left child 5 is +1 (i.e., non-negative), it is an LL case. Therefore, perform a right rotation on node 9 to restore the AVL property.
