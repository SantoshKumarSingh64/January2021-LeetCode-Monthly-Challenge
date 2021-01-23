<h1>Determine if Two Strings Are Close</h1>
<p><br>
Two strings are considered close if you can attain one from the other using the following operations:<br>
&emsp;&emsp;•	Operation 1: Swap any two existing characters.<br>
&emsp;&emsp;&emsp;&emsp;o	For example, abcde -> aecdb<br>
&emsp;&emsp;•	Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.<br>
&emsp;&emsp;&emsp;&emsp;o	For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)<br>
You can use the operations on either string as many times as necessary.<br>
Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: word1 = "abc", word2 = "bca"<br>
&emsp;&emsp;Output: true<br>
&emsp;&emsp;Explanation: You can attain word2 from word1 in 2 operations.<br>
&emsp;&emsp;&emsp;&emsp;Apply Operation 1: "abc" -> "acb"<br>
&emsp;&emsp;&emsp;&emsp;Apply Operation 1: "acb" -> "bca"<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: word1 = "a", word2 = "aa"<br>
&emsp;&emsp;Output: false<br>
&emsp;&emsp;Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: word1 = "cabbba", word2 = "abbccc"<br>
&emsp;&emsp;Output: true<br>
&emsp;&emsp;Explanation: You can attain word2 from word1 in 3 operations.<br>
&emsp;&emsp;&emsp;&emsp;Apply Operation 1: "cabbba" -> "caabbb"<br>
&emsp;&emsp;&emsp;&emsp;Apply Operation 2: "caabbb" -> "baaccc"<br>
&emsp;&emsp;&emsp;&emsp;Apply Operation 2: "baaccc" -> "abbccc"<br>
<br>
Example 4:<br>
&emsp;&emsp;Input: word1 = "cabbba", word2 = "aabbss"<br>
&emsp;&emsp;Output: false<br>
&emsp;&emsp;Explanation: It is impossible to attain word2 from word1, or vice versa, in any amount of operations.<br>
<br>
Constraints:<br>
&emsp;&emsp;•	1 <= word1.length, word2.length <= 10^5<br>
&emsp;&emsp;•	word1 and word2 contain only lowercase English letters.<br>
<br></p>
