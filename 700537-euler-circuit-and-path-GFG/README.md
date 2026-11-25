# [Euler Circuit and Path](https://www.geeksforgeeks.org/problems/euler-circuit-and-path/1?page=3&difficulty%5B%5D=1&category%5B%5D=Graph&sortBy=submissions)
## Medium
An Eulerian Path is a path in a graph that visits every edge exactly once. An Eulerian Circuit is an Eulerian Path that starts and ends at the same vertex.Given an undirected graph represented by an adjacency list adj[][], where adj[i] contains all vertices connected to vertex i by an edge, determine whether the graph contains an Eulerian Path or an Eulerian Circuit.Return 2 if the graph contains an Eulerian Circuit.Return 1 if the graph contains an Eulerian Path but not an Eulerian Circuit.Return 0 if the graph contains neither.ExamplesInput: adj[][] = [[1, 2], [0, 2], [0, 1]]
Output: 2
Explanation: Following is an eulerian circuit in the mentioned graph: 1 -&gt; 2 -&gt; 0 -&gt; 1Input: adj[][] = [[1, 2], [0], [0]]Output: 1
Explanation: Following is an eulerian path in the mentioned graph: 1 -&gt; 0 -&gt; 2