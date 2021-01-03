class Solution:
    def countArrangement(self, n: int) -> int:
        
        self.result = 0
        def dfs(nums, n):

            if n == 0:
                self.result += 1
                return 

            for i in range(n,0,-1):
                nums[i],nums[n] = nums[n],nums[i]
                if(nums[n]%n == 0 or n%nums[n]==0):
                    dfs(nums,n-1)
                nums[i],nums[n] = nums[n],nums[i]
        
        nums = [x for x in range(n+1)]
        dfs(nums,n);
        return self.result
