def sum(n):
    s=0
    c=1
    for i in range(1,n+1):
        s=s+factorial(c)
        c=c+2
    return s
def factorial(n):
    p=1
    for i in range(1,n+1):
        p=p*i
    return p
n=int(input("Enter the range"))
print("Sum=",sum(n))
    