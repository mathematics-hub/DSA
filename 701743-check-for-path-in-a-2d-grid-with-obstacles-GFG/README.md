# [Check for Path in a 2D Grid with Obstacles](https://www.geeksforgeeks.org/problems/find-whether-path-exist5238/1?page=1&difficulty%5B%5D=1&category%5B%5D=Graph&sortBy=submissions)
## Medium
Given a square matrix mat[][] containing integers 0, 1, 2, and 3 having the following meanings1 represents the source cell2 represents the destination cell3 represents a blank cell through which movement is allowed0 represents a wall that cannot be traversedThere is exactly one source and one destination in the grid.&nbsp;Find whether a path exists from the source cell to the destination cell.&nbsp;Movement is allowed in four directions: up, down, left, and right.Examples :Input: mat[][] = [[0, 3, 1, 0], [3, 0, 3, 3], [2, 3, 0, 3], [0, 3, 3, 3]]; 
Output: true
Explanation: A path exists from source 1 to destination 2 through valid cells 3.
Input: mat[][] = [[1, 0, 3], [0, 0, 0], [3, 3, 2]];
Output: false
Explanation: No path exists as the source 1 is blocked and cannot reach destination 2. 