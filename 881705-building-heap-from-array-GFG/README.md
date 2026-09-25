# [Building Heap from Array](https://www.geeksforgeeks.org/problems/heapify-the-vector--102013/1)
## Easy
Given an integer array arr[], build a Max Heap from the given array.
A Max Heap is a complete binary tree where each parent node is greater than or equal to its children, ensuring the largest element is at the root.
Note: The driver code prints true if the resulting array represents a valid Max Heap; otherwise, it prints false. Multiple valid Max Heap arrangements are possible.
Examples:
Input:&nbsp;arr[] = [4, 10, 3, 5, 1]Output: trueExplanation: The resulting array represents a valid Max Heap, with 10 as the root and every parent greater than or equal to its children.
Input: arr[] = [1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17]Output: trueExplanation: The resulting array forms a valid Max Heap, where 17 is the largest element at the root and each parent is greater than or equal to its children.
