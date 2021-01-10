from sortedcontainers import SortedList
def createSortedArray(instructions):

        s1 =  SortedList()
        cost = 0
        MOD = 10**9+7

        for x in instructions:
                left = s1.bisect_left(x)
                right = len(s1) - s1.bisect_right(x)
                print(left,right)
                cost += min(left,right)
                cost = cost%MOD
                s1.add(x)
                
        return cost

                
        

print(createSortedArray([1,3,3,3,2,4,2,1,2]))
