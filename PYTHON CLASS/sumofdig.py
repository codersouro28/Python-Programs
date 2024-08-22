def sumOfDig(n):
    s=0
    while(n!=0):
        r=n%10
        s=s+r
        n=n//10
    return s
n=(int(input("Enter the number:")))
print("Sum of digits=",sumOfDig(n))