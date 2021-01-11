<h1>Merge Sorted Array</h1>
<p><br>
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.<br>
The number of elements initialized in nums1 and nums2 are m and n respectively. You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.<br>
<br> 
Example 1:<br>
&emsp; &emsp;Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3<br>
&emsp; &emsp;Output: [1,2,2,3,5,6]<br>
<br>
Example 2:<br>
&emsp; &emsp;Input: nums1 = [1], m = 1, nums2 = [], n = 0<br>
&emsp; &emsp;Output: [1]<br>
 <br>
Constraints:<br>
&emsp; &emsp;•	0 <= n, m <= 200<br>
&emsp; &emsp;•	1 <= n + m <= 200<br>
&emsp; &emsp;•	nums1.length == m + n<br>
&emsp; &emsp;•	nums2.length == n<br>
&emsp; &emsp;•	-109 <= nums1[i], nums2[i] <= 109<br>

