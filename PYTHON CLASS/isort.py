def iSort(arr):
    for i in range(1, len(arr)):
 
        key = arr[i]
        ptr = i-1
        
        while j >= 0 and key < arr[ptr] :
                arr[ptr + 1] = arr[ptr]
                ptr -= 1
        arr[ptr + 1] = key
print("Enter the array elements:")        
arr = list(map(int,input().split()))
iSort(arr)
print("Elements after sorting:")
for i in range(len(arr)):
    print ("% d" % arr[i])