# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        
        queue = []
        queue.insert(0,cloned)
        
        while len(queue) > 0 :
            
            temp = queue.pop()
            if temp.val == target.val:
                return temp
            
            if temp.left:
                queue.insert(0,temp.left)
            if temp.right:
                queue.insert(0,temp.right)
            
        
            
            
        
        