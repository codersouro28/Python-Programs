
def sSort(A):
    for i in range(len(A)):
        min = i
        for j in range(i+1, len(A)):
            if A[min] > A[j]:
                min = j       
        A[i], A[min] = A[min], A[i]
print("Enter the elements") 
A=list(map(int,input().split()))
sSort(A)
print ("Sorted array")
for i in range(len(A)):
    print("%d" %A[i]),