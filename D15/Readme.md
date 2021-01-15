<h1>Get Maximum in Generated Array</h1>
<p><br>
You are given an integer n. An array nums of length n + 1 is generated in the following way:<br>
&emsp;&emsp;• nums[0] = 0<br>
&emsp;&emsp;• nums[1] = 1<br>
&emsp;&emsp;• nums[2 * i] = nums[i] when 2 <= 2 * i <= n<br>
&emsp;&emsp;• nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n<br>
Return the maximum integer in the array nums.<br>
 <br>
Example 1:<br>
&emsp;&emsp;Input: n = 7<br>
&emsp;&emsp;Output: 3<br>
&emsp;&emsp;Explanation: According to the given rules:<br>
&emsp;&emsp;&emsp;nums[0] = 0<br>
&emsp;&emsp;&emsp;nums[1] = 1<br>
&emsp;&emsp;&emsp;nums[(1 * 2) = 2] = nums[1] = 1<br>
&emsp;&emsp;&emsp;nums[(1 * 2) + 1 = 3] = nums[1] + nums[2] = 1 + 1 = 2<br>
&emsp;&emsp;&emsp;nums[(2 * 2) = 4] = nums[2] = 1<br>
&emsp;&emsp;&emsp;nums[(2 * 2) + 1 = 5] = nums[2] + nums[3] = 1 + 2 = 3<br>
&emsp;&emsp;&emsp;nums[(3 * 2) = 6] = nums[3] = 2<br>
&emsp;&emsp;&emsp;nums[(3 * 2) + 1 = 7] = nums[3] + nums[4] = 2 + 1 = 3<br>
&emsp;&emsp;Hence, nums = [0,1,1,2,1,3,2,3], and the maximum is 3.<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: n = 2<br>
&emsp;&emsp;Output: 1<br>
&emsp;&emsp;Explanation: According to the given rules, the maximum between nums[0], nums[1], and nums[2] is 1.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: n = 3<br>
&emsp;&emsp;Output: 2<br>
&emsp;&emsp;Explanation: According to the given rules, the maximum between nums[0], nums[1], nums[2], and nums[3] is 2.<br>
<br>
Constraints:<br>
&emsp;&emsp;• 0 <= n <= 100<br></p>

