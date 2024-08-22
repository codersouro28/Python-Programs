def mergelist(l1,l2):
    n=len(l1)
    m=len(l2)
    l3=[]
    i=0;j=0
    while(i<n and j<m):
        if(l1[i]<l2[j]):
            l3.append(l1[i])
            i+=1
        else:
            l3.append(l2[j])
            j+=1
    while(i<n):
        l3.append(l1[i])
        i+=1
    while(j<m):
        l3.append(l2[j])
        j+=1
    return l3

n=int(input("Enter the range of first list"))
a=[];b=[]
for i in range (n):
    x=int(input("Enter any number:"))
    a.append(x)
m=int(input("Enter the range of second list"))    
for i in range (m):
    x=int(input("Enter any number:"))
    b.append(x)
c=mergelist(a,b)
print("Merged list:",c)