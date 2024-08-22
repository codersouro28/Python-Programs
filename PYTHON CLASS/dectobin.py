def binary(n):
    if(n>0):
        return((n%2)+10*binary(n//2))
    else:
        return 0
n=int(input("Enter the Decimal Number:"))
print("Binary=",(binary(n)))