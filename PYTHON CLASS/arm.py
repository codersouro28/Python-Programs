a=int(input("Enter a number"))
n,s=a,0

while(n!=0):
    r=n%10
    s+=(r**3)
    n//=10
if(s==a):
    print("Armstrong")
else:
    print("Not Armstrong")
