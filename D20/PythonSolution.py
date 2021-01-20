class Solution:
    def isValid(self, s: str) -> bool:
        
        stack = []
        
        for x in s:
            if x == '}':
                if stack and stack[-1] == '{':
                    stack.pop()
                else:
                    return False
            elif x == ']':
                if stack and stack[-1] == '[':
                    stack.pop()
                else:
                    return False
            elif x == ')':
                if stack and stack[-1] == '(':
                    stack.pop()
                else:
                    return False
            
            else:
                stack.append(x)
        
        if len(stack) == 0:
            return True
        
        return False
            
        
