'''4
  434
 43234
4321234
 43234
  434
   4'''

n=int(input("Enter the range:"))
for i in range(n,0,-1):
    for j in range(1,i):
        print(end=" ")
    for j in range(n,i-1,-1):
        print(j,end="")
    for j in range(i+1,n+1):
        print(j,end="")
    print()
for i in range(1,n):
    for j in range(1,i+1):
        print(end=" ")
    for j in range(n,i,-1):
        print(j,end="")
    for j in range(i+2,n+1):
        print(j,end="")
    print()
    
        