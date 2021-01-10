class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        
        if (not beginWord) or (not endWord) or (not wordList) or (endWord not in wordList):
            return 0 
        
        def isAdjacent(s1,s2):
            count = 0
            for x in range(len(s1)):
                if s1[x] != s2[x]:
                    count += 1
                    if count > 1:
                        return False
            return True

        queue = []
        queue.append([beginWord,1])
        
        if beginWord in wordList:
            wordList.remove(beginWord)
            
        while len(queue) > 0:
            
            word = queue[0]
            temp = []
            for x in wordList:
                if isAdjacent(word[0],x):
                    queue.append([x,word[1]+1])
                    temp.append(x)
                    if x == endWord:
                        return word[1]+1
            for x in temp:
                wordList.remove(x)
            queue = queue[1:]
        
        return 0
