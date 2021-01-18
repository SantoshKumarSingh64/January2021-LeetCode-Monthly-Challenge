class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        
        dt = {}
        count = 0
        
        for x in nums:    
            if k-x in dt and dt[k-x] > 0:
                count += 1
                dt[k-x] -= 1
            else:
                dt[x] = dt.get(x,0)+1
            
        return count
