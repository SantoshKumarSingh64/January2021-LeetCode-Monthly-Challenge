# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def verticalTraversal(self, root: TreeNode) -> List[List[int]]:
        
        if root is None:
            return []
        
        def helper(x,y,root,memo):
            
            if root:
                memo[x] = memo.get(x,{})
                memo[x][y] = memo[x].get(y,[])
                memo[x][y].append(root.val)
                
                if root.left:
                    helper(x-1,y-1,root.left,memo)
                if root.right:
                    helper(x+1,y-1,root.right,memo)
        
        memo = {}
        helper(0,0,root,memo)
        ans = []
        for x in sorted(memo):
            temp = []
            for y in sorted(memo[x].keys(),reverse=True):
                temp.extend(sorted(memo[x][y]))
            ans.append(temp)
        return ans
