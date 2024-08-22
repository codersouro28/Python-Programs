def avg(a,b,c):
    average=(a+b+c)/3
    return average
n1,n2,n3 = map(int,input("Enter three numbers:").split())
print(avg(n1,n2,n3))
