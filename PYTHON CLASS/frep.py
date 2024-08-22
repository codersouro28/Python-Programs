f1=open("myfile.txt","r")
st=''
t=f1.readline()
new=input("Enter the replacing word:")
old=input("Enter the word to be replaced:")
s=t.split()
for i in range(len(s)):
    if(s[i]==old):
        s[i]=new    
lts=' '.join([str(j) for j in s])
print(lts)
f1.close()
    
