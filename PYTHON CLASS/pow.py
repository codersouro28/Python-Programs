def power(x,y):
    n=bin(y)
    s=str(n)
    res=1
    for i in range(len(s)):
        if(s[i]=='1'):
            res=res*res*x
        else:
            res=res*res
    return res
x=int(input("Enter the base:"))
y=int(input("Enter the power:"))
print(x,"raised to",y,"is:",power(x,y))