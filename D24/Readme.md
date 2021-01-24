<h1>Merge K Sorted Lists</h1>
<p><br>
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.<br>
Merge all the linked-lists into one sorted linked-list and return it.<br>
<br>
Example 1:<br>
&emsp;&emsp;Input: lists = [[1,4,5],[1,3,4],[2,6]]<br>
&emsp;&emsp;Output: [1,1,2,3,4,4,5,6]<br>
&emsp;&emsp;Explanation: The linked-lists are:<br>
&emsp;&emsp;&emsp;&emsp;[<br>
&emsp;&emsp;&emsp;&emsp;  1->4->5,<br>
&emsp;&emsp;&emsp;&emsp;  1->3->4,<br>
&emsp;&emsp;&emsp;&emsp;  2->6<br>
&emsp;&emsp;&emsp;&emsp;]<br>
&emsp;&emsp;merging them into one sorted list:<br>
&emsp;&emsp;1->1->2->3->4->4->5->6<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: lists = []<br>
&emsp;&emsp;Output: []<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: lists = [[]]<br>
&emsp;&emsp;Output: []<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	k == lists.length<br>
&emsp;&emsp;•	0 <= k <= 10^4<br>
&emsp;&emsp;•	0 <= lists[i].length <= 500<br>
&emsp;&emsp;•	-10^4 <= lists[i][j] <= 10^4<br>
&emsp;&emsp;•	lists[i] is sorted in ascending order.<br>
&emsp;&emsp;•	The sum of lists[i].length won't exceed 10^4.<br>
</p>

