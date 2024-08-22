def sum(n):
    if(n>0):
        return ((n%10+sum(n//10)))
    else:
        return 0

n=int(input("Enter a number:"))
print("Sum=",(sum(n)))