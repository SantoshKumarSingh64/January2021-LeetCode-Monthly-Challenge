<h1>Check Array Formation Through Concatenation</h1>
<p><br>
You are given an array of distinct integers arr and an array of integer arrays pieces, where the integers in pieces are distinct.<br>
Your goal is to form arr by concatenating the arrays in pieces in any order.<br>
However, you are not allowed to reorder the integers in each array pieces[i].<br>
Return true if it is possible to form the array arr from pieces. Otherwise, return false.<br>
<br>
<br>
Example 1:<br>
 Input: arr = [85], pieces = [[85]]<br>
 Output: true<br>
<br>
Example 2:<br>
 Input: arr = [15,88], pieces = [[88],[15]]<br>
 Output: true<br>
 Explanation: Concatenate [15] then [88]<br>
 <br>
Example 3:<br>
 Input: arr = [49,18,16], pieces = [[16,18,49]]<br>
 Output: false<br>
 Explanation: Even though the numbers match, we cannot reorder pieces[0].<br>
<br>
Example 4:<br>
 Input: arr = [91,4,64,78], pieces = [[78],[4,64],[91]]<br>
 Output: true<br>
 Explanation: Concatenate [91] then [4,64] then [78]<br>
<br>
Example 5:<br>
 Input: arr = [1,3,5,7], pieces = [[2,4,6,8]]<br>
 Output: false<br>
<br>
Constraints:<br>
•	1 <= pieces.length <= arr.length <= 100<br>
•	sum(pieces[i].length) == arr.length<br>
•	1 <= pieces[i].length <= arr.length<br>
•	1 <= arr[i], pieces[i][j] <= 100<br>
•	The integers in arr are distinct.<br>
•	The integers in pieces are distinct (i.e., If we flatten pieces in a 1D array, all the integers in this array are distinct).<br>
</p>
