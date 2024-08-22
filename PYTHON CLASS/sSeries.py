def factorial(n):
    p=1
    for i in range(1,n+1):
        p=p*i
    return p
def sSeries(n):
    s=0
    i=1
    for c in range(n):
        s=s+factorial(i)*((-1)**c)
        i=i+2
    return s
n=int(input("Enter the number of terms:"))
print("Sum of series:",sSeries(n))
    
    
        