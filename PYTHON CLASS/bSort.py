def bSort(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if(arr[j]>arr[j+1]):
                (arr[j],arr[j+1])=(arr[j+1],arr[j])
print("Enter the elements:")
arr=list(map(int,input().split()))
bSort(arr)
print ("Sorted array is:")
for i in range(len(arr)):
    print ("% d" % arr[i])
