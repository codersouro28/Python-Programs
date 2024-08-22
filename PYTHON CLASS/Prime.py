#Enter the number:5
#5  is Prime Number

def isPrime(n):
    p=int(n**0.5)
    f=True
    for i in range(2,p+1):
        if n%i==0:
            f=False
            break
    return f
n=int(input("Enter the number:"))
if isPrime(n):
        print(n," is Prime Number")
else:
    print(n," is not Prime Number")