<h1>Create Sorted Array through Instructions</h1>
<p>
<br>
Given an integer array instructions, you are asked to create a sorted array from the elements in instructions. You start with an empty container nums. For each element from left to right in instructions, insert it into nums. The cost of each insertion is the minimum of the following:<br>
&emsp;&emsp;•	The number of elements currently in nums that are strictly less than instructions[i].<br>
&emsp;&emsp;•	The number of elements currently in nums that are strictly greater than instructions[i].<br>
For example, if inserting element 3 into nums = [1,2,3,5], the cost of insertion is min(2, 1) (elements 1 and 2 are less than 3, element 5 is greater than 3) and nums will become [1,2,3,3,5].<br>
Return the total cost to insert all elements from instructions into nums. Since the answer may be large, return it modulo 10^9 + 7<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: instructions = [1,5,6,2]<br>
&emsp;&emsp;Output: 1<br>
&emsp;&emsp;Explanation: Begin with nums = [].<br>
&emsp;&emsp;&emsp;&emsp;Insert 1 with cost min(0, 0) = 0, now nums = [1].<br>
&emsp;&emsp;&emsp;&emsp;Insert 5 with cost min(1, 0) = 0, now nums = [1,5].<br>
&emsp;&emsp;&emsp;&emsp;Insert 6 with cost min(2, 0) = 0, now nums = [1,5,6].<br>
&emsp;&emsp;&emsp;&emsp;Insert 2 with cost min(1, 2) = 1, now nums = [1,2,5,6].<br>
&emsp;&emsp;&emsp;&emsp;The total cost is 0 + 0 + 0 + 1 = 1.<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: instructions = [1,2,3,6,5,4]<br>
&emsp;&emsp;Output: 3<br>
&emsp;&emsp;Explanation: Begin with nums = [].<br>
&emsp;&emsp;&emsp;&emsp;Insert 1 with cost min(0, 0) = 0, now nums = [1].<br>
&emsp;&emsp;&emsp;&emsp;Insert 2 with cost min(1, 0) = 0, now nums = [1,2].<br>
&emsp;&emsp;&emsp;&emsp;Insert 3 with cost min(2, 0) = 0, now nums = [1,2,3].<br>
&emsp;&emsp;&emsp;&emsp;Insert 6 with cost min(3, 0) = 0, now nums = [1,2,3,6].<br>
&emsp;&emsp;&emsp;&emsp;Insert 5 with cost min(3, 1) = 1, now nums = [1,2,3,5,6].<br>
&emsp;&emsp;&emsp;&emsp;Insert 4 with cost min(3, 2) = 2, now nums = [1,2,3,4,5,6].<br>
&emsp;&emsp;&emsp;&emsp;The total cost is 0 + 0 + 0 + 0 + 1 + 2 = 3.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: instructions = [1,3,3,3,2,4,2,1,2]<br>
&emsp;&emsp;Output: 4<br>
&emsp;&emsp;Explanation: Begin with nums = [].<br>
&emsp;&emsp;&emsp;&emsp;Insert 1 with cost min(0, 0) = 0, now nums = [1].<br>
&emsp;&emsp;&emsp;&emsp;Insert 3 with cost min(1, 0) = 0, now nums = [1,3].<br>
&emsp;&emsp;&emsp;&emsp;Insert 3 with cost min(1, 0) = 0, now nums = [1,3,3].<br>
&emsp;&emsp;&emsp;&emsp;Insert 3 with cost min(1, 0) = 0, now nums = [1,3,3,3].<br>
&emsp;&emsp;&emsp;&emsp;Insert 2 with cost min(1, 3) = 1, now nums = [1,2,3,3,3].<br>
&emsp;&emsp;&emsp;&emsp;Insert 4 with cost min(5, 0) = 0, now nums = [1,2,3,3,3,4].<br>
&emsp;&emsp;&emsp;&emsp;Insert 2 with cost min(1, 4) = 1, now nums = [1,2,2,3,3,3,4].<br>
&emsp;&emsp;&emsp;&emsp;Insert 1 with cost min(0, 6) = 0, now nums = [1,1,2,2,3,3,3,4].<br>
&emsp;&emsp;&emsp;&emsp;Insert 2 with cost min(2, 4) = 2, now nums = [1,1,2,2,2,3,3,3,4].<br>
&emsp;&emsp;&emsp;&emsp;The total cost is 0 + 0 + 0 + 0 + 1 + 0 + 1 + 0 + 2 = 4.<br>
<br> 
Constraints:<br>
&emsp;&emsp;•	1 <= instructions.length <= 10^5<br>
&emsp;&emsp;•	1 <= instructions[i] <= 10^5<br>
<br></p>
