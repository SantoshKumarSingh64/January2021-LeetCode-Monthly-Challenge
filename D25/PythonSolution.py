class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        
        if k == 0:
            return True
        
        prev_1 = None
        next_1 = None
        
        for x in range(len(nums)):
            if nums[x] == 1:
                if prev_1 is None:
                    prev_1 = x
                else:
                    next_1 = x
                    if next_1 - 1 - prev_1 < k:
                        return False
                    prev_1 = x
        
        return True
                        
                    
        
