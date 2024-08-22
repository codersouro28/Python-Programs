s=input("Enter a string: ")
l=list(s.split())
l.sort(key=len)
l.reverse()
for i in l:
    print(i,"-",len(i))