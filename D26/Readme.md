<h1>Path With Minimum Effort</h1>
<p><br>
You are a hiker preparing for an upcoming hike. You are given heights, a 2D array of size rows x columns, where heights[row][col] represents the height of cell (row, col). You are situated in the top-left cell, (0, 0), and you hope to travel to the bottom-right cell, (rows-1, columns-1) (i.e., 0-indexed). You can move up, down, left, or right, and you wish to find a route that requires the minimum effort.<br>
A route's effort is the maximum absolute difference in heights between two consecutive cells of the route.<br>
Return the minimum effort required to travel from the top-left cell to the bottom-right cell.<br>
<br> 
Example 1:<br>
<br>
&emsp;&emsp;&emsp;&emsp;<img src = "https://assets.leetcode.com/uploads/2020/10/04/ex1.png"><br>
<br> 
&emsp;&emsp;Input: heights = [[1,2,2],[3,8,2],[5,3,5]]<br>
&emsp;&emsp;Output: 2<br>
&emsp;&emsp;Explanation: The route of [1,3,5,3,5] has a maximum absolute difference of 2 in consecutive cells.<br>
&emsp;&emsp;&emsp;&emsp;This is better than the route of [1,2,2,2,5], where the maximum absolute difference is 3.<br>
<br>
Example 2:<br>
 <br>
 &emsp;&emsp;&emsp;&emsp;<img src = "https://assets.leetcode.com/uploads/2020/10/04/ex2.png"><br>
 <br>
&emsp;&emsp;Input: heights = [[1,2,3],[3,8,4],[5,3,5]]<br>
&emsp;&emsp;Output: 1<br>
&emsp;&emsp;Explanation: The route of [1,2,3,4,5] has a maximum absolute difference of 1 in consecutive cells, which is better than route [1,3,5,3,5].<br>
<br>
Example 3:<br>
 <br>
 &emsp;&emsp;&emsp;&emsp;<img src = "https://assets.leetcode.com/uploads/2020/10/04/ex3.png"><br>
 <br>
&emsp;&emsp;Input: heights = [[1,2,1,1,1],[1,2,1,2,1],[1,2,1,2,1],[1,2,1,2,1],[1,1,1,2,1]]<br>
&emsp;&emsp;Output: 0<br>
&emsp;&emsp;Explanation: This route does not require any effort.<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	rows == heights.length<br>
&emsp;&emsp;•	columns == heights[i].length<br>
&emsp;&emsp;•	1 <= rows, columns <= 100<br>
&emsp;&emsp;•	1 <= heights[i][j] <= 10^6<br>
</p>
