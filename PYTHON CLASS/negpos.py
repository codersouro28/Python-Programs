def seperate():
    p=[]
    n=[]
    l=list(map(int,input().split()))
    for i in l:
        if(i<0):
            n.append(i)
        else:
            p.append(i)
    print("Negative numbers:")
    print(n)
    print("Positive numbers:")
    print(p)
seperate()