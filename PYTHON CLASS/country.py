def add(d):
    n=int(input("Enter the number of countries: "))
    for i in range(n):
        k=input("Enter country name: ")
        d[k]=input("Enter capital name: ")
    return d
    
def edit(d):
    cn=input("Enter the country name you want to edit: ")
    if cn in d.keys():
        d[cn]=input("New Capital")
    return d
    
def search(d):
    cn=input("Enter country name you want to search: ")
    if cn in d.keys():
        print("Capital of ",cn," is: ",d[cn])
    else:
        print("Search unsuccessfull")
        
def delete(d):
    cn=input("Enter country name you want to delete:")
    if cn in d.keys():
        d.pop(cn)
    else:
        print("Country not found")
    return d
    
d={}
f1=open("country.txt","r")
s=f1.read()
#print(s)
t=s.split("\n")
#print(t)
for i in t:
    #print(i)
    if len(i)==0:
        break
    l=i.split(":")
    #print(l)
    d[l[0]]=l[1]
#print(d)

while True:
    print("Enter 1 to add")
    print("Enter 2 to edit")
    print("Enter 3 to search")
    print("Enter 4 to delete")
    print("Enter 0 to exit")
    i=int(input("Enter your choice:"))

    if(i==1):
        print(add(d))
    elif(i==2):
        print(edit(d))
    elif(i==3):
        search(d)
    elif(i==4):
        print(delete(d))
    elif(i==0):
        print("Asta la Vista")
        break
    else:
        print("Wrong Choice")
        
f1=open("country.txt","w")
for k,v in d.items():
    f1.write(k+":"+v+"\n")
f1.close()    
