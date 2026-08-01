# [Remove Every k'th in Linked List](https://www.geeksforgeeks.org/problems/remove-every-kth-node/1)
## Easy
Given a singly linked list head , your task is to remove every kth node from the linked list.&nbsp;
Examples:
Input: head: 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5 -&gt; 6 -&gt; 7 -&gt; 8, k = 2Output: 1 -&gt; 3 -&gt; 5 -&gt; 7Explanation: After removing every 2nd node of the linked list, the resultant linked list will be: 1 -&gt; 3 -&gt; 5 -&gt; 7.
Input: head: 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5 -&gt; 6 -&gt; 7 -&gt; 8 -&gt; 9 -&gt; 10, k = 3Output: 1 -&gt; 2 -&gt; 4 -&gt; 5 -&gt; 7 -&gt; 8 -&gt; 10Explanation: After removing every 3rd node of the linked list, the resultant linked list will be: 1 -&gt; 2 -&gt; 4 -&gt; 5 -&gt; 7 -&gt; 8 -&gt; 10.
Constraints:1 ≤ size of linked list ≤ 1061 ≤ node-&gt;data ≤ 1061 ≤ k ≤ size of linked list