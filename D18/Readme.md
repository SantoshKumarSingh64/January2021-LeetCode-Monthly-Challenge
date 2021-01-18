<h1>Max Number of K-Sum Pairs</h1>
<p><br>
You are given an integer array nums and an integer k.<br>
In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.<br>
Return the maximum number of operations you can perform on the array.<br>
<br>
Example 1:<br>
&emsp; &emsp; Input: nums = [1,2,3,4], k = 5<br>
&emsp; &emsp;Output: 2<br>
&emsp; &emsp;Explanation: Starting with nums = [1,2,3,4]:<br>
&emsp; &emsp; &emsp; - Remove numbers 1 and 4, then nums = [2,3]<br>
&emsp; &emsp; &emsp; - Remove numbers 2 and 3, then nums = []<br>
&emsp; &emsp; &emsp; There are no more pairs that sum up to 5, hence a total of 2 operations.<br>
<br>
Example 2:<br>
&emsp; &emsp;Input: nums = [3,1,3,4,3], k = 6<br>
&emsp; &emsp;Output: 1<br>
&emsp; &emsp;Explanation: Starting with nums = [3,1,3,4,3]:<br>
&emsp; &emsp; &emsp;- Remove the first two 3's, then nums = [1,4,3]<br>
&emsp; &emsp;&emsp;There are no more pairs that sum up to 6, hence a total of 1 operation.<br>
<br>
Constraints:<br>
&emsp; &emsp;•	1 <= nums.length <= 10^5<br>
&emsp; &emsp;•	1 <= nums[i] <= 10^9<br>
&emsp; &emsp;•	1 <= k <= 10^9<br>
</p>
