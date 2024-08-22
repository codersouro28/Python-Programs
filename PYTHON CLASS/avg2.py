def avg(*n):
    sum=0
    for i in n:
        sum=sum+i
    a=sum/len(n)
    return a

print("Enter numbers seperated by space.Please press 'Enter' to terminate the input: ")
l=[int(x) for x in input().split() ]
print("Average:",avg(*l))
    