#Three digited Armstrong numbers are:
#153 370 371 407

def isArmstrong(n):
    s=0
    a=n
    while(n!=0):
        r=n%10
        s=s+r**3
        n=n//10
    return (a==s)
def threeDigArmstrong():
    for i in range(100,1000):
        if(isArmstrong(i)):
            print(i,end=" ")

print("Three digited Armstrong numbers are:")
threeDigArmstrong()