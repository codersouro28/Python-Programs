def binary(n):
    if(n>0):
        return binary(n//2)+str(n%2)
    else:
        return '0'
n=int(input("Enter the Decimal Number:"))
print("Binary=",(binary(n)))