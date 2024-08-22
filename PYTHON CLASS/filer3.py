f1=open("myfile.txt","r")
st=input("Enter the word:")
for t in f1.readlines():
    if st in t:
        print(t)
f1.close()
    
