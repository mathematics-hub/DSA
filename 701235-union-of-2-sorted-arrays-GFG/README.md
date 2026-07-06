# [Union of 2 Sorted Arrays](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?page=2&difficulty=Medium&sortBy=submissions)
## Medium
Given two sorted&nbsp;arrays&nbsp;a[]&nbsp;and&nbsp;b[], where each array may contain duplicate&nbsp;elements , the task is to return the elements in the&nbsp;union of the two arrays in sorted order.Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.
Examples:
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]Output: [1, 2, 3, 4, 5, 6, 7]Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: [1, 2, 3, 4, 5]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: [1, 2]
Explanation: Distinct elements including both the arrays are: 1 2.
Constraints:1&nbsp; ≤&nbsp; a.size(), b.size()&nbsp; ≤&nbsp; 105-109 ≤ a[i], b[i] ≤109