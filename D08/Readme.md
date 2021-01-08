<h1>Check If Two String Arrays are Equivalent</h1>
<p>
<br>
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.<br>
A string is represented by an array if the array elements concatenated in order forms the string.<br>
<br>
Example 1:<br>
&emsp; &emsp;Input: word1 = ["ab", "c"], word2 = ["a", "bc"]<br>
&emsp; &emsp;Output: true<br>
&emsp; &emsp;Explanation:<br>
&emsp; &emsp;&emsp; &emsp;word1 represents string "ab" + "c" -> "abc"<br>
&emsp; &emsp;&emsp; &emsp;word2 represents string "a" + "bc" -> "abc"<br>
&emsp; &emsp;&emsp; &emsp;The strings are the same, so return true.<br>
<br>
Example 2:<br>
&emsp; &emsp;Input: word1 = ["a", "cb"], word2 = ["ab", "c"]<br>
&emsp; &emsp;Output: false<br>
<br>
Example 3:<br>
&emsp; &emsp;Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]<br>
&emsp; &emsp;Output: true<br>
<br>
<br>
Constraints:<br>
&emsp; &emsp;•	1 <= word1.length, word2.length <= 103<br>
&emsp; &emsp;•	1 <= word1[i].length, word2[i].length <= 103<br>
&emsp; &emsp;•	1 <= sum(word1[i].length), sum(word2[i].length) <= 103<br>
&emsp; &emsp;•	word1[i] and word2[i] consist of lowercase letters.<br>
<br>
</p>
