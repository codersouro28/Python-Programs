import operator
d={}
td={}
sd=[]
n=int(input("Enter the number of students:"))
for i in range(n):
    name=input("Enter the name:")
    print("Enter marks in four subjects")
    l=list(map(int,input().split()))
    d[name]=[l]
    td[name]=[sum(l)]
    sd=dict(sorted(td.items(),key=operator.itemgetter(1)))
print (d)
print (td)
print(sd)
print("Topper=",max([sd.items(),key=operator.itemgetter(1)[0],":",sd[list(sd.keys())[-1]])