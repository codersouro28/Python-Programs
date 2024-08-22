


n=int(input("Enter the number:"))
c=0
while(n!=0):
    r=n%10
    if(r%2!=0):
        c+=1
    n=n//10
print("Number of odd digits are:",c)