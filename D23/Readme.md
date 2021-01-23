<h1>Sort the Matrix Diagonally</h1>
<p><br>
A matrix diagonal is a diagonal line of cells starting from some cell in either the topmost row or leftmost column and going in the bottom-right direction until reaching the matrix's end. For example, the matrix diagonal starting from mat[2][0], where mat is a 6 x 3 matrix, includes cells mat[2][0], mat[3][1], and mat[4][2].<br>

Given an m x n matrix mat of integers, sort each matrix diagonal in ascending order and return the resulting matrix.<br>
<br>
Example 1:<br><br>
&emsp;&emsp;&emsp;&emsp;<img src = "https://assets.leetcode.com/uploads/2020/01/21/1482_example_1_2.png"><br><br>
&emsp;&emsp;Input: mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]<br>
&emsp;&emsp;Output: [[1,1,1,1],[1,2,2,2],[1,2,3,3]]<br>
<br>
Constraints:<br>
&emsp;&emsp;•	m == mat.length<br>
&emsp;&emsp;•	n == mat[i].length<br>
&emsp;&emsp;•	1 <= m, n <= 100<br>
&emsp;&emsp;•	1 <= mat[i][j] <= 100<br>
</p>
