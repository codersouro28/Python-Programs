#frequency of word
st=input("Enter a String")
l=st.split()
wfreq={}
for keys in l:
    wfreq[keys]=wfreq.get(keys,0) +1
   
print("Individual Character character count:"+str(wfreq))
        
        
    