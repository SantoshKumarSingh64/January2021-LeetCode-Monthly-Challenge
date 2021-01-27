<h1>Concatenation of Consecutive Binary Numbers</h1>
<p><br>
Given an integer n, return the decimal value of the binary string formed by concatenating the binary representations of 1 to n in order, modulo 10^9 + 7.<br>
<br>
Example 1:<br>
&emsp;&emsp;Input: n = 1<br>
&emsp;&emsp;Output: 1<br>
&emsp;&emsp;Explanation: "1" in binary corresponds to the decimal value 1.<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: n = 3<br>
&emsp;&emsp;Output: 27<br>
&emsp;&emsp;Explanation: In binary, 1, 2, and 3 corresponds to "1", "10", and "11".<br>
&emsp;&emsp;&emsp;&emsp;After concatenating them, we have "11011", which corresponds to the decimal value 27.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: n = 12<br>
&emsp;&emsp;Output: 505379714<br>
&emsp;&emsp;Explanation: The concatenation results in "1101110010111011110001001101010111100".<br>
&emsp;&emsp;&emsp;&emsp;The decimal value of that is 118505380540.<br>
&emsp;&emsp;&emsp;&emsp;After modulo 109 + 7, the result is 505379714.<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	1 <= n <= 10^5<br>
<br></p>
