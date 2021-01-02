<h1>Find a Corresponding Node of a Binary Tree in a Clone of That Tree</h1>
<br>
<p><br>
Given two binary trees original and cloned and given a reference to a node target in the original tree.<br>
The cloned tree is a copy of the original tree.<br>
Return a reference to the same node in the cloned tree.<br>
Note that you are not allowed to change any of the two trees or the target node and<br>
the answer must be a reference to a node in the cloned tree.<br>
  <br>
Follow up: Solve the problem if repeated values on the tree are allowed.<br>
<br>
<br>
Example 1:<br>
<br>  
![e1](https://user-images.githubusercontent.com/62387061/103462699-1da36480-4d4d-11eb-9065-170bf7fdfe55.png)
<br>
Input: tree = [7,4,3,null,null,6,19], target = 3<br>
Output: 3<br>
Explanation: In all examples the original and cloned trees are shown. The target node is a green node from the original tree. The answer is the yellow node from the cloned tree.<br>
<br>
Example 2:<br>
 <br>
  ![e2](https://user-images.githubusercontent.com/62387061/103462743-665b1d80-4d4d-11eb-9ebd-d322fce8b6a9.png)
 <br> 
Input: tree = [7], target =  7<br>
Output: 7<br>
<br>
<br>
Example 3:<br>
<br>
  ![e3](https://user-images.githubusercontent.com/62387061/103462796-ade1a980-4d4d-11eb-94f5-401e0d0c0d1d.png)
<br>
Input: tree = [8,null,6,null,5,null,4,null,3,null,2,null,1], target = 4<br>
Output: 4<br>
<br>
<br>
Example 4:<br>
<br>
  ![e4](https://user-images.githubusercontent.com/62387061/103462836-03b65180-4d4e-11eb-8b50-0aa68cd4e688.png)
<br>
Input: tree = [1,2,3,4,5,6,7,8,9,10], target = 5<br>
Output: 5<br>
<br>
<br>
Example 5:<br>
<br>
  ![e5](https://user-images.githubusercontent.com/62387061/103462844-12046d80-4d4e-11eb-837b-d4fab2098c0d.png)
<br>
Input: tree = [1,2,null,3], target = 2<br>
Output: 2<br>
<br>
<br>
<br>
Constraints:<br>
•	The number of nodes in the tree is in the range [1, 10^4].<br>
•	The values of the nodes of the tree are unique.<br>
•	target node is a node from the original tree and is not null.<br></p>






