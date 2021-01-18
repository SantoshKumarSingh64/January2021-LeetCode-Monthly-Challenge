<h1> Count Sorted Vowel Strings </h1>
<p><br>
Given an integer n, return the number of strings of length n that consist only of vowels (a, e, i, o, u) and are lexicographically sorted.<br>
A string s is lexicographically sorted if for all valid i, s[i] is the same as or comes before s[i+1] in the alphabet.<br>
<br>
Example 1:<br>
&emsp;&emsp;Input: n = 1<br>
&emsp;&emsp;Output: 5<br>
&emsp;&emsp;Explanation: The 5 sorted strings that consist of vowels only are ["a","e","i","o","u"].<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: n = 2<br>
&emsp;&emsp;Output: 15<br>
&emsp;&emsp;Explanation: The 15 sorted strings that consist of vowels only are<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"].<br>
&emsp;&emsp;Note that "ea" is not a valid string since 'e' comes after 'a' in the alphabet.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: n = 33<br>
&emsp;&emsp;Output: 66045<br>
<br>
Constraints:<br>
&emsp;&emsp;•	1 <= n <= 50 <br>
</p>


