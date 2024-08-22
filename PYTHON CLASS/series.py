





n=int(input("Enter the number of terms:"))
i=0
print("The series upto",n,"terms is:")
for c in range(n):
    if(c%2==0):
        i=i*10+1
    else:
        i=i*10+2
    print(i,end=" ")
    
    
    
