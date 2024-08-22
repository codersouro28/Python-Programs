def avg(*n):
    sum=0
    for i in n:
        sum=sum+i
    a=sum/len(n)
    return a
print("Enter the numbers: ")
l=list(map(int,input().split()))
print("Average:",avg(*l))
    