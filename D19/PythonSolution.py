class Solution:
    def longestPalindrome(self, s: str) -> str:
    
        def expand(s,left,right):
            while left >= 0 and right < len(s) and s[left] == s[right]:
                left -= 1
                right += 1

            return right-left-1
        
        start = 0
        end = 0
        
        for i in range(len(s)):
            
            odd = expand(s,i,i)
            even = expand(s,i,i+1)
            
            length = max(odd,even)
            
            if length > end-start:
                start = i - (length-1)//2
                end = i+length//2
            
        return s[start:end+1]
    
    
