def words(st):
    c=0
    for i in range(len(st)):
        if(st[i]==' ' and st[i+1]!=' '):
            c+=1
    return (c+1)
st=input("Enter a string:") 
print("No of words=",words(st))  