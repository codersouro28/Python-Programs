def findKey(d,key):
    if key in d:
        return True
    return False
    
def sumVal(d):
    s=0
    for val in d.values():
        s+=val
    return s
d={}
n=int(input(("Enter the number of item: ")))
for i in range(n):
    k=input("Key?")
    val=int(input("Value?"))
    d[k]=val
k=input("Enter the key you want to search: ")
pr=findKey(d,k)
if(pr):
    print("Key Present")
else:
    print("Key Absent")

print("Sum of values: ",sumVal(d))
   