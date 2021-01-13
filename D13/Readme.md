<h1>Boats to Save People</h1>
<p><br>
The i-th person has weight people[i], and each boat can carry a maximum weight of limit.<br>
Each boat carries at most 2 people at the same time, provided the sum of the weight of those people is at most limit.<br>
Return the minimum number of boats to carry every given person.  (It is guaranteed each person can be carried by a boat.)<br>
<br> 
Example 1:<br>
&emsp;&emsp;&emsp;&emsp;Input: people = [1,2], limit = 3<br>
&emsp;&emsp;&emsp;&emsp;Output: 1<br>
&emsp;&emsp;&emsp;&emsp;Explanation: 1 boat (1, 2)<br>
<br>
Example 2:<br>
&emsp;&emsp;&emsp;&emsp;Input: people = [3,2,2,1], limit = 3<br>
&emsp;&emsp;&emsp;&emsp;Output: 3<br>
&emsp;&emsp;&emsp;&emsp;Explanation: 3 boats (1, 2), (2) and (3)<br>
<br>
Example 3:<br>
&emsp;&emsp;&emsp;&emsp;Input: people = [3,5,3,4], limit = 5<br>
&emsp;&emsp;&emsp;&emsp;Output: 4<br>
&emsp;&emsp;&emsp;&emsp;Explanation: 4 boats (3), (3), (4), (5)<br>
<br>
Note:<br>
&emsp;&emsp;&emsp;&emsp;•	1 <= people.length <= 50000<br>
&emsp;&emsp;&emsp;&emsp;•	1 <= people[i] <= limit <= 30000<br>
</p>
