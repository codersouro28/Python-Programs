'''1
  121
 12321
1234321
 12321
  121
   1'''




n=int(input("Enter the range:"))
for i in range(1,5):
    for j in range(1,5-i+1):
        print(end=" ")
    for j in range(1,i+1):
        print(j,end="")
    for j in range(i-1,0,-1):
        print(j,end="")
    for j in range(1,5-i+1):
        print(end=" ")
    print()
for i in range(5-1,0,-1):
    for j in range(1,5-i+1):
        print(end=" ")
    for j in range(1,i+1):
        print(j,end="")
    for j in range(i-1,0,-1):
        print(j,end="")
    print()
    
    