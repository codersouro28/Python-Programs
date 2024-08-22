def power(x,n):
    if(n==0):
        return 1;
    else:
        return (x*power(x,n-1))
x=int(input("Enter the base: "))
n=int(input("Enter the exponent: "))
print(x,"raised to",n,"is:",power(x,n))