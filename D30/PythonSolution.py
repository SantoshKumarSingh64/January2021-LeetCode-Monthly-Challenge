import bisect 

class TreeSet(object): 

    def __init__(self): 
        self._treeset = []  
    
    def addElement(self, element): 
        if element not in self: 
            bisect.insort(self._treeset, element) 
    
    def __getitem__(self, num): 
        return self._treeset[num] 

    def __len__(self): 
        return len(self._treeset) 


    def __iter__(self): 
        for element in self._treeset: 
            yield element 

    def pop(self): 
        return self._treeset.pop() 

    def __str__(self): 
        return str(self._treeset) 
    
    def __eq__(self, target): 
        if isinstance(target, TreeSet): 
            return self._treeset == target.treeset 
        elif isinstance(target, list): 
            return self._treeset == target 

    def __contains__(self, e): 
        try: 
            return e == self._treeset[bisect.bisect_left(self._treeset, e)] 
        except: 
            return False

class Solution:
    def minimumDeviation(self, nums: List[int]) -> int:
        
        t = TreeSet()
        
        for x in nums:
            if x%2 == 0:
                t.addElement(x)
            else:
                t.addElement(2*x)
        
        difference = 10**9+7
        
        while True:
            
            minValue = t[0]
            maxValue = t[-1]
            t.pop()
            difference = min(difference,maxValue-minValue)
            
            if maxValue % 2 == 0:
                t.addElement(maxValue//2)
            else:
                return difference
