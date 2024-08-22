def fibonacci(n):
    (a,b,c,l)=(0,1,0,[])
    print("----xFibonacci Series----")
    for i in range(n):
        l.append(a)
        c=a+b
        a=b
        b=c
    return l
n=int(input("Enter the range:"))
print(fibonacci(n))              