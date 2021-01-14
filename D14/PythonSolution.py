class Solution:
    def minOperations(self, nums: List[int], x: int,ans = 0) -> int:
    
        n = len(nums)
        total = sum(num for num in nums)
        x = total-x
        
        if x == 0:
            return n
        
        total = 0
        longest = 0
        dt = {}
        dt[total] = 0
        for idx in range(n):
            total += nums[idx]
            dt[total] = (idx+1)
            if (total - x) in dt:
                longest = max(longest,idx+1-dt[total - x])

        if longest == 0:
            return -1
        return n-longest
