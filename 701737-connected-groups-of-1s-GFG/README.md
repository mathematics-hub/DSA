# [Connected Groups of 1s](https://www.geeksforgeeks.org/problems/x-total-shapes3617/1?page=2&difficulty%5B%5D=1&category%5B%5D=Graph&sortBy=submissions)
## Medium
Given an n × m binary grid, count the number of connected groups formed by cells containing 1. Two cells belong to the same group if they are adjacent horizontally or vertically. Diagonal adjacency is not considered.
Examples:
Input: n = 3, m = 4, grid[][] = [[1, 0, 1, 1], [1, 0, 0, 0], [0, 0, 1, 1]]
Output: 3
Explanation: The grid is- The 1s form three separate connected groups when considering only horizontal and vertical adjacency as shown in figure.
Input: n = 2, m = 2, grid = [[1, 1], [1, 1]]
Output: 1
Explanation: The grid is - &nbsp; All 1s are connected through horizontal or vertical adjacency, forming a single group.
Constraints:1 ≤ n, m&nbsp;≤ 100