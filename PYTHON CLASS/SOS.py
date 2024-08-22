def sumOfSeries(n):
    s=0
    i=1
    for c in range(1,n+1):
        s=s+i**c
        i=i+2 
    return s
n=int(input("Enter the range:"))
print("Series:")
print(sumOfSeries(n))