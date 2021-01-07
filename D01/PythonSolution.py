def canFormArray(arr, pieces):
    
    dt = {}
    for x in range(len(arr)):
        dt[arr[x]] = x
        
    for x in pieces:
            
        if x[0] not in dt:
            return False
        index = dt[x[0]]
        
        for y in x:
            if y not in dt:
                return False
            if index >= len(arr) or y != arr[index]:
                return False
                
            index += 1
            
    return True

print(canFormArray([1,3,5,7], [[2,4,6,8]]))