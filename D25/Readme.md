<h1>Check If All 1's Are at Least Length K Places Away</h1>
<p><br>
Given an array nums of 0s and 1s and an integer k, return True if all 1's are at least k places away from each other, otherwise return False.<br>
<br>
Example 1:<br>
<br>
&emsp;&emsp;&emsp;&emsp;<img src = "https://assets.leetcode.com/uploads/2020/04/15/sample_1_1791.png"><br>
<br>
&emsp;&emsp;Input: nums = [1,0,0,0,1,0,0,1], k = 2<br>
&emsp;&emsp;Output: true<br>
&emsp;&emsp;Explanation: Each of the 1s are at least 2 places away from each other.<br>
<br>
Example 2:<br>
<br>
&emsp;&emsp;&emsp;&emsp;<img src = "https://assets.leetcode.com/uploads/2020/04/15/sample_2_1791.png"><br>
<br>
&emsp;&emsp;Input: nums = [1,0,0,1,0,1], k = 2<br>
&emsp;&emsp;Output: false<br>
&emsp;&emsp;Explanation: The second 1 and third 1 are only one apart from each other.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: nums = [1,1,1,1,1], k = 0<br>
&emsp;&emsp;Output: true<br>
<br>
Example 4:<br>
&emsp;&emsp;Input: nums = [0,1,0,1], k = 1<br>
&emsp;&emsp;Output: true<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	1 <= nums.length <= 10^5<br>
&emsp;&emsp;•	0 <= k <= nums.length<br>
&emsp;&emsp;•	nums[i] is 0 or 1<br>
</p>


