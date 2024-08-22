#frequency of word
f1=open("myfile.txt","r")
t=f1.read()
l=t.split()
wfreq={}
for keys in l:
    wfreq[keys]=wfreq.get(keys,0) +1  
print("Individual word count:"+str(wfreq))
        
        
    