#Enter the number:145
#145 is Peterson

def factorial(n):
    p=1
    for i in range(1,n+1):
        p=p*i
    return p
    
def isPeterson(n):
    s=0
    a=n
    while(n!=0):
        r=n%10
        s=s+factorial(r)
        n=n//10
    return (s==a)
n=int(input("Enter the number:"))
if(isPeterson(n)):
    print(n,"is Peterson")
else:
     print(n,"is not Peterson")
