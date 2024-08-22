f1=open("myfile.txt","r")
t=f1.readline()
while t:
    print(t)
    t=f1.readline()
f1.close()