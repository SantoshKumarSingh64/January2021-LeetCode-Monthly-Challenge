class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        
        Wrd1, Wrd2 = '',''
        
        for x in word1:
            Wrd1 += x
        for x in word2:
            Wrd2 += x
        
        return (Wrd1 == Wrd2)
        
