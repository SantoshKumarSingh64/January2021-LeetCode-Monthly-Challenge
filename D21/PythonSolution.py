class Solution:
    def mostCompetitive(self, nums: List[int], k: int) -> List[int]:
        
        stack = []
        numbersToRemoved = len(nums)-k
        
        for x in nums:
            
            while stack and numbersToRemoved > 0 and stack[-1] > x:
                stack.pop()
                numbersToRemoved -= 1
            stack.append(x)
        
        while numbersToRemoved > 0:
            stack.pop()
            numbersToRemoved -= 1
        
        return stack
                    
                
