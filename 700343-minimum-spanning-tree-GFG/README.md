# [Minimum Spanning Tree](https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article)
## Medium
Given a weighted, undirected, and connected graph represented by an adjacency list adj[][][], where adj[u] contains pairs [v, w] representing an edge from u to v with weight w.Find the total weight of its Minimum Spanning Tree (MST) using Prim's Algorithm.Examples:Input: adj[][][] = [[[1, 5], [2, 1]], [[0, 5], [2, 3]], [[0, 1], [1, 3]]]
 Output: 4
Explanation:
The MST contains edges (0, 2) with weight 1 and (1, 2) with weight 3. The total weight is 1 + 3 = 4.Input:&nbsp;adj[][][] = [[[1, 5]], [[0, 5]]] Output: 5 Explanation: Only one Spanning Tree is possible which has a weight of 5.