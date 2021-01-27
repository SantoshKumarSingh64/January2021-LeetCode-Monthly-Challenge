class Solution:
    def concatenatedBinary(self, n: int) -> int:
        
        mod = 1000000007
        ans = 0
        
        for x in range(1,n+1):
            
            binary = bin(x).replace("0b","")
            for bit in binary:
                if bit == '1':
                    val = 1
                else:
                    val = 0
                ans = (((ans*2)%mod)+val)%mod
            
        return ans
            
