#Enter the base number:3
#Enter the range:3
#Sum= -1.725

def factorial(n):
    p=1
    for i in range(1,n+1):
        p=p*i
    return p
def soSeries(x,n):
    s=0
    i=1
    for c in range(1,n+1):
        s=s+(((x**c)/factorial(i))*((-1)**(c+1)))
        i=i+2
    return s
x=int(input("Enter the base number:"))    
n=int(input("Enter the range:"))
print("Sum=",soSeries(x,n))    