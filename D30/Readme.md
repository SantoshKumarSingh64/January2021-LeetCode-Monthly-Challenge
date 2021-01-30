<h1>Minimize Deviation in Array</h1>
<p><br>
You are given an array nums of n positive integers.<br>
You can perform two types of operations on any element of the array any number of times:<br>
&emsp;&emsp;•	If the element is even, divide it by 2.<br>
&emsp;&emsp;&emsp;&emsp;•	For example, if the array is [1,2,3,4], then you can do this operation on the last element, and the array will be [1,2,3,2].<br>
&emsp;&emsp;•	If the element is odd, multiply it by 2.<br>
&emsp;&emsp;&emsp;&emsp;•	For example, if the array is [1,2,3,4], then you can do this operation on the first element, and the array will be [2,2,3,4].<br>
The deviation of the array is the maximum difference between any two elements in the array.<br>
Return the minimum deviation the array can have after performing some number of operations.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: nums = [1,2,3,4]<br>
&emsp;&emsp;Output: 1<br>
&emsp;&emsp;Explanation: You can transform the array to [1,2,3,2], then to [2,2,3,2], then the deviation will be 3 - 2 = 1.<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: nums = [4,1,5,20,3]<br>
&emsp;&emsp;Output: 3<br>
&emsp;&emsp;Explanation: You can transform the array after two operations to [4,2,5,5,3], then the deviation will be 5 - 2 = 3.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: nums = [2,10,8]<br>
&emsp;&emsp;Output: 3<br>
<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	n == nums.length<br>
&emsp;&emsp;•	2 <= n <= 10^5<br>
&emsp;&emsp;•	1 <= nums[i] <= 10^9<br>
<br></p>
