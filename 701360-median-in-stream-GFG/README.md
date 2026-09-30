# [Median in Stream](https://www.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1)
## Medium
Given a data stream&nbsp;arr[] where integers are read sequentially, find the median of the elements encountered so far after each new integer is read.The median is defined as follows:Odd number of elements: The median is the middle element when the current set of numbers is sorted.Even number of elements: The median is the arithmetic mean (average) of the two middle elements when the current set of numbers is sorted.Examples:Input: arr[] = [5, 15, 1, 3, 2, 8]
Output: [5.0, 10.0, 5.0, 4.0, 3.0, 4.0] 
Explanation: 
After reading 1st element of stream – 5 -&gt; median = 5.0
After reading 2nd element of stream – 5, 15 -&gt; median = (5+15)/2 = 10.0 
After reading 3rd element of stream – 5, 15, 1 -&gt; median = 5.0
After reading 4th element of stream – 5, 15, 1, 3 -&gt;  median = (3+5)/2 = 4.0
After reading 5th element of stream – 5, 15, 1, 3, 2 -&gt; median = 3.0
After reading 6th element of stream – 5, 15, 1, 3, 2, 8 -&gt;  median = (3+5)/2 = 4.0Input: arr[] = [2, 2, 2, 2]Output: [2.0, 2.0, 2.0, 2.0]Explanation: After reading 1st element of stream – 2 -&gt; median = 2.0After reading 2nd element of stream – 2, 2 -&gt; median = (2+2)/2 = 2.0After reading 3rd element of stream – 2, 2, 2 -&gt; median = 2.0After reading 4th element of stream – 2, 2, 2, 2 -&gt;&nbsp; median = (2+2)/2 = 2.0