def larger(a,b,c):
    if a>b:
        if a>c:
            max=a
        else:
            max=c
    else:
        if b>c:
            max=b
        else:
            max=c
    return max
    
a,b,c=map(int,input("Enter three numbers:").split())
print("Max=",larger(a,b,c))