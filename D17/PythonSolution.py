class Solution:
    def countVowelStrings(self, n: int) -> int:
        
        dp = [[0 for x in range(5)]for y in range(n)]
        
        for col in range(5):
            dp[0][col] = 1
        
        for row in range(n):
            dp[row][0] = 1
        
        for row in range(1,n):
            for col in range(1,5):
                
                dp[row][col] = dp[row-1][col] + dp[row][col-1]
            
        return sum(x for x in dp[-1])
            
               
               
        
        
        
