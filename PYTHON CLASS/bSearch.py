def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0
 
    while low <= high:
 
        mid = (high + low) // 2
        
        if arr[mid] < x:
            low = mid + 1
 
        elif arr[mid] > x:
            high = mid - 1
 
        else:
            return mid
            
    return -1
print("Enter the elements of the list")    
arr=list(map(int,input().split()))
arr.sort()
x=int(input("Enter the number to be searched:"))
res = binary_search(arr, x)
 
if res != -1:
    print("Element is present at index",res)
else:
    print("Element is not present in array")