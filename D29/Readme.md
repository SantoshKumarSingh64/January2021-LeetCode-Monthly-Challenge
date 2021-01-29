<h1>Vertical Order Traversal of a Binary Tree</h1>
<p><br>
Given the root of a binary tree, calculate the vertical order traversal of the binary tree.
For each node at position (x, y), its left and right children will be at positions (x - 1, y - 1) and (x + 1, y - 1) respectively.
The vertical order traversal of a binary tree is a list of non-empty reports for each unique x-coordinate from left to right. Each report is a list of all nodes at a given x-coordinate. The report should be primarily sorted by y-coordinate from highest y-coordinate to lowest. If any two nodes have the same y-coordinate in the report, the node with the smaller value should appear earlier.
Return the vertical order traversal of the binary tree.<br>
<br> 
Example 1:<br>
 <br>
 &emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2019/01/31/1236_example_1.PNG"><br>
 <br>
&emsp;&emsp;Input: root = [3,9,20,null,null,15,7]<br>
&emsp;&emsp;Output: [[9],[3,15],[20],[7]]<br>
&emsp;&emsp;Explanation: Without loss of generality, we can assume the root node is at position (0, 0):<br>
&emsp;&emsp;&emsp;&emsp;The node with value 9 occurs at position (-1, -1).<br>
&emsp;&emsp;&emsp;&emsp;The nodes with values 3 and 15 occur at positions (0, 0) and (0, -2).<br>
&emsp;&emsp;&emsp;&emsp;The node with value 20 occurs at position (1, -1).<br>
&emsp;&emsp;&emsp;&emsp;The node with value 7 occurs at position (2, -2).<br>
<br>
Example 2:<br>
<br>
&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2019/01/31/tree2.png"><br>
<br>
&emsp;&emsp;Input: root = [1,2,3,4,5,6,7]<br>
&emsp;&emsp;Output: [[4],[2],[1,5,6],[3],[7]]<br>
&emsp;&emsp;Explanation: The node with value 5 and the node with value 6 have the same position according to the given scheme.<br>
&emsp;&emsp;&emsp;&emsp;However, in the report [1,5,6], the node with value 5 comes first since 5 is smaller than 6.<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	The number of nodes in the tree is in the range [1, 1000].<br>
&emsp;&emsp;•	0 <= Node.val <= 1000<br>
<br></p>
