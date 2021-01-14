<h1>Minimum Operations to Reduce X to Zero</h1>
<p><br>
You are given an integer array nums and an integer x. In one operation, you can either remove the leftmost or the rightmost element from the array nums and subtract its value from x. Note that this modifies the array for future operations.<br>
Return the minimum number of operations to reduce x to exactly 0 if it's possible, otherwise, return -1.<br>
<br> 
Example 1:<br>
Input: nums = [1,1,4,2,3], x = 5<br>
Output: 2<br>
Explanation: The optimal solution is to remove the last two elements to reduce x to zero.<br>
<br>
Example 2:<br>
Input: nums = [5,6,7,8,9], x = 4<br>
Output: -1<br>
<br>
Example 3:<br>
Input: nums = [3,2,20,1,1,3], x = 10<br>
Output: 5<br>
Explanation: The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero.<br>
 <br>
Constraints:<br>
•	1 <= nums.length <= 10^5<br>
•	1 <= nums[i] <= 10^4<br>
•	1 <= x <= 10^9<br>
<br></p>
