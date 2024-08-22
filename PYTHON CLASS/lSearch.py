def lSearch():
    f=False
    print("Enter the numbers:")
    l=list(map(int,input().split()))
    x=int(input("Enter the number to be searched:"))
    for i in range(len(l)):
        if(l[i]==x):
            return i
    return -1
res=lSearch()
if(res!=-1):
    print("Search Successfulland number is present at index",res)
else:
    print("Search Unsuccessfull")