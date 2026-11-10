# [Rotten Oranges](https://www.geeksforgeeks.org/problems/rotten-oranges2536/1)
## Medium
Given a matrix&nbsp;mat[][], where each cell in the matrix can have values&nbsp;0, 1 or 2&nbsp;which has the following meaning:0&nbsp;: Empty cell1&nbsp;: Cell have fresh oranges2&nbsp;: Cell have rotten orangesDetermine the&nbsp;minimum time&nbsp;required so that all the oranges become rotten.&nbsp;A rotten orange at index (i, j) can rot other fresh orange at indexes (i-1, j), (i+1, j), (i, j-1), (i, j+1) (up,&nbsp;down,&nbsp;left&nbsp;and&nbsp;right) in a unit time.Note:&nbsp;If it is impossible to rot every orange then simply return -1.Examples:Input: mat[][] = [[2, 1, 0, 2, 1], [1, 0, 1, 2, 1], [1, 0, 0, 2, 1]]
Output: 2
Explanation: Oranges at positions (0,0), (0,3), (1,3), and (2,3) will rot adjacent fresh oranges in successive time frames.All fresh oranges become rotten after 2 units of time.Input: mat[][] = [[2, 1, 0, 2, 1], [0, 0, 1, 2, 1], [1, 0, 0, 2, 1]]
Output: -1
Explanation: Oranges at positions (0,0), (0,3), (1,3), and (2,3) rot some fresh oranges,but the fresh orange at (2,0) can never be reached, so not all oranges can rot.
