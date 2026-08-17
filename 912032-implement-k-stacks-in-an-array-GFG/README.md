# [Implement k stacks in an array](https://www.geeksforgeeks.org/problems/implement-k-stacks-in-an-array/1)
## Hard
You are given two integers n and k.&nbsp;Your task is to implement a class kStacks that uses a single array of size n to simulate k independent stacks.The class should support the following operations:

push(x, i) – Push element x into the i-th stack.
pop(i) – Pop the top element from the i-th stack and return it. Return -1 if it is empty.

There will be a sequence of q queries queries[][]. The queries are represented in numeric form:

1 x i: Call push(x, i)
2 i:&nbsp;&nbsp;Call pop(i)

The driver code will process the queries, call the corresponding functions, and print the outputs of pop(i) operations.You only need to implement the above two functions.
Examples:
Input: n = 4, k = 2, q = 5,queries[][] = [[1, 5, 0], [1, 3, 0], [2, 0], [1, 1, 1], [2, 1]]
Output: [3, 1]
Explanation: Queries on stack are as follows:
push(5, 0): push 5 to 0-th stack
push(3, 0): push 3 to 0-th stack
pop(0): pop the top element 3 from the 0-th stack
push(1, 1): push 1 to 1-th stack
pop(1): pop the top element 1 from the 1-th stack
Input: n = 9, k = 3, q = 7,
queries[][] = [[1, 2, 0], [1, 5, 0], [1, 4, 1], [2, 1], [1, 3, 2], [2, 0], [2, 0]]
Output: [4, 5, 2]
Explanation: Queries on stack are as follows:push(2, 0): push 2 to 0-th stack
push(5, 0): push 5 to 0-th stackpush(4, 1): push 4 to 1-th stack
pop(1): pop the top element 4 from the 1-th stack
push(3, 2): push 3 to 2-th stack
pop(0): pop the top element 5 from the 0-th stackpop(0): pop the top element 2 from the 0-th stack
Constraints:1 ≤ q ≤ 1051 ≤ k ≤ n ≤ 1050 ≤ values on the stacks ≤ 109