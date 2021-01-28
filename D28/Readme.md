<h1>Smallest String With A Given Numeric Value</h1>
<p><br>
The numeric value of a lowercase character is defined as its position (1-indexed) in the alphabet, so the numeric value of a is 1, the numeric value of b is 2, the numeric value of c is 3, and so on.<br>
The numeric value of a string consisting of lowercase characters is defined as the sum of its characters' numeric values. For example, the numeric value of the string "abe" is equal to 1 + 2 + 5 = 8.<br>
You are given two integers n and k. Return the lexicographically smallest string with length equal to n and numeric value equal to k.<br>
Note that a string x is lexicographically smaller than string y if x comes before y in dictionary order, that is, either x is a prefix of y, or if i is the first position such that x[i] != y[i], then x[i] comes before y[i] in alphabetic order.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: n = 3, k = 27<br>
&emsp;&emsp;Output: "aay"<br>
&emsp;&emsp;Explanation: The numeric value of the string is 1 + 1 + 25 = 27, and it is the smallest string with such a value and length equal to 3.<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: n = 5, k = 73<br>
&emsp;&emsp;Output: "aaszz"<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	1 <= n <= 10^5<br>
&emsp;&emsp;•	n <= k <= 26 * n<br>
<br></p>
