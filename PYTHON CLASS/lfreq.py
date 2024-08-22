#frequency of letter
st=input("Enter a String")

lfreq={}
for keys in st:
    lfreq[keys]=lfreq.get(keys,0) +1
   
print("Individual Character character count:"+str(lfreq))
        
        
    