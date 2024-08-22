def posNeg(l):
    pos,neg=0,0
    for i in l:
        if(i>=0):
            pos+=i
        else:
            neg+=i
            
    return (pos,neg)
l=list(map(int,input("Enter 5 numbers: ").split()))
(pos,neg)=posNeg(l)
avg=sum(l)/5
print(f"Positive numbers' sum= {pos},Negative numbers' sum= {neg}")
print("Average= ",avg)
print("Numbers above average: ")
for i in l:
    if(i>avg):
        print(i,end=" ")
    