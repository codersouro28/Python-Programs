'''1
  121
 12321
1234321
 12321
  121
   1'''




for i in range(1,5):
    for j in range(1,5-i+1):
        print(end=" ")
    for j in range(1,i+1):
        if(i%2!=0):
            print("*",end="")
        else:
            print(j,end="")
    for j in range(i-1,0,-1):
        if(i%2!=0):
            print("*",end="")
        else:
            print(j,end="")
    print()
for i in range(4,0,-1):
    for j in range(1,5-i+2):
        print(end=" ")
    for j in range(1,i):
        if(i%2==0):
            print("*",end="")
        else:
            print(j,end="")
    for j in range(i-2,0,-1):
        if(i%2==0):
            print("*",end="")
        else:
            print(j,end="")

    print()
    
    