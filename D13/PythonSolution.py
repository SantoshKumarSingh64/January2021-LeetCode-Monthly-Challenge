class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        
        people.sort()
        boat = 0
        
        start = 0
        end = len(people)-1
        
        while start <= end:
            
            if people[start] + people[end] <= limit:
                start += 1
            
            end -= 1
            boat += 1
        
        return boat
        
