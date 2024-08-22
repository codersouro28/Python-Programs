def lardiff(l):   
    max=l[0];min=l[0]
    for i in range(len(l)):                             
        if(l[i]>max):
            max=l[i]
        if(i<min):
            min=l[i]
    return max-min
n=int(input("Enter the range"))
l=[]
for i in range (n):
    x=int(input("Enter any number:"))
    l.append(x)
d=lardiff(l)
print("Largest difference:",d)