from queue import PriorityQueue 
class Solution:
    def minimumEffortPath(self, heights: List[List[int]]) -> int:
        
        row = len(heights)
        col = len(heights[0])
        
        direction = [0,1,0,-1,0]
        ans = [[10**6 for x in range(col)]for y in range(row)]
        ans[0][0] = 0
        
        pq = PriorityQueue()
        pq.put((0,0,0))
        
        while not pq.empty():
            
            head = pq.get()
            x = head[1]
            y = head[2]
            currentAns = head[0]
            if x == row-1  and y == col-1:
                return currentAns
            
            for k in range(4):
                newX = x + direction[k]
                newY = y + direction[k+1]
                
                
                if newX >= 0 and newX < row and newY >= 0 and newY < col:
                    nextAns = max(currentAns,abs(heights[newX][newY] - heights[x][y]))
                    
                    if nextAns < ans[newX][newY]:
                        ans[newX][newY] = nextAns
                        pq.put((nextAns,newX,newY))
        return 0
