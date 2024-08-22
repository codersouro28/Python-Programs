def abbreviate(st):
    l= st.strip().split()
    ab=" "
    for i in range(len(l)-1):
        ab+=(l[i][0].upper()+'.')
    ab+=l[-1].title()
    return ab
st=input("Enter a String:")
print("Abbreviated String:"+abbreviate(st))
        
        