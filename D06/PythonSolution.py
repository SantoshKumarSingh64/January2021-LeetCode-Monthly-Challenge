def findKthPositive(arr, k):

    num = 1
    index = 0
    n = len(arr)
    while index < n:

        if k == 0:
            return (num-1)
            
        if num == arr[index]:
            index += 1
        else:
            k -= 1
        num += 1
        
    return (num+k-1)
