def gcd(a,b):
    if(a<b):
        (a,b)=(b,a)
    if(a%b==0):
        return b
    else:
        return(gcd(b,a%b))
a,b=map(int,input("Enter two numbers:").split(','))
print("GCD=",gcd(a,b))