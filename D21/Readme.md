<h1>Find the Most Competitive Subsequence</h1>
<p><br>
Given an integer array nums and a positive integer k, return the most competitive subsequence of nums of size k.<br>
An array's subsequence is a resulting sequence obtained by erasing some (possibly zero) elements from the array.<br>
We define that a subsequence a is more competitive than a subsequence b (of the same length) if in the first position where a and b differ, subsequence a has a number less than the corresponding number in b. For example, [1,3,4] is more competitive than [1,3,5] because the first position they differ is at the final number, and 4 is less than 5.<br>
<br>
Example 1:<br>
&emsp; &emsp;Input: nums = [3,5,2,6], k = 2<br>
&emsp; &emsp;Output: [2,6]<br>
&emsp; &emsp;Explanation: Among the set of every possible subsequence: {[3,5], [3,2], [3,6], [5,2], [5,6], [2,6]}, [2,6] is the most competitive.<br>
<br>
Example 2:<br>
&emsp; &emsp;Input: nums = [2,4,3,3,5,4,9,6], k = 4<br>
&emsp; &emsp;Output: [2,3,3,4]<br>
<br>
Constraints:<br>
&emsp; &emsp;•	1 <= nums.length <= 10^5<br>
&emsp; &emsp;•	0 <= nums[i] <= 10^9<br>
&emsp; &emsp;•	1 <= k <= nums.length<br>
</p>

