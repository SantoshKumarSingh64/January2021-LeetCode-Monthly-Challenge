class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        
        dt1 = {}
        for x in word1:
            dt1[x] = dt1.get(x,0) + 1
        
        dt2 = {}
        for x in word2:
            if x not in dt1:
                return False
            dt2[x] = dt2.get(x,0)+1
    
        values1 = [x for x in dt1.values()]
        values2 = [x for x in dt2.values()]
        
        values1.sort()
        values2.sort()
        
        if values1 == values2:
            return True
        
        return False
                
        
