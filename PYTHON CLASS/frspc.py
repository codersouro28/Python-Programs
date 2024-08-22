f1=open("myfile.txt","r")
st=''
t=f1.readline()
for i in range(len(t)):
    if (t[i]==' ' and t[i+1]!=' ') or t[i]!=' ' :
        st=st+t[i]
print(st)
f1.close()
    
