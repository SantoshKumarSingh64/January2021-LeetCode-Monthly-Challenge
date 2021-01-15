class Solution:
    
    global arr
    arr = [0,1,1]
    for x in range(3,1001):
        if x%2 == 0:
            arr.append(arr[x//2])
        else:
            arr.append(arr[x//2]+arr[x//2+1])
        
    def getMaximumGenerated(self, n: int) -> int:
        
        global arr
        return max(arr[:n+1])
