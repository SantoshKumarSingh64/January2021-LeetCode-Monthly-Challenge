<h1> Beautiful Arrangement </h1>
<p><br>
<br>
Suppose you have n integers from 1 to n. We define a beautiful arrangement as an array that is constructed by these n numbers successfully if one of the following is true for the ith position (1 <= i <= n) in this array:<br>
&emsp; &emsp;•	The number at the ith position is divisible by i.<br>
&emsp; &emsp;•	i is divisible by the number at the ith position.<br>
Given an integer n, return the number of the beautiful arrangements that you can construct.<br>
<br> 
Example 1:<br>
&emsp; &emsp;Input: n = 2<br>
&emsp; &emsp;Output: 2<br>
&emsp; &emsp;Explanation: <br>
&emsp; &emsp;The first beautiful arrangement is [1, 2]:<br>
&emsp; &emsp;&emsp; &emsp;Number at the 1st position (i=1) is 1, and 1 is divisible by i (i=1).<br>
&emsp; &emsp;&emsp; &emsp;Number at the 2nd position (i=2) is 2, and 2 is divisible by i (i=2).<br>
&emsp; &emsp;&emsp; &emsp;The second beautiful arrangement is [2, 1]:<br>
&emsp; &emsp;&emsp; &emsp;Number at the 1st position (i=1) is 2, and 2 is divisible by i (i=1).<br>
&emsp; &emsp;&emsp; &emsp;Number at the 2nd position (i=2) is 1, and i (i=2) is divisible by 1.<br>
<br>
Example 2:<br>
&emsp; &emsp;Input: n = 1<br>
&emsp; &emsp;Output: 1<br>
 <br>
Constraints:<br>
&emsp; &emsp;•	1 <= n <= 15<br></p>


