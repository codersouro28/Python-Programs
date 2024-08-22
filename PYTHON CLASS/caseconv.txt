def capitalize(st):
    st=" "+st
    st2=list(st)
    st3=" "
    for i in range(len(st)):
        if((st2[i]==' ' and st2[i+1]!=' ')and(st2[i+1]>='a' and st2[i+1]<='z')):
            st2[i+1]=chr(ord(st2[i+1])-32)
        st3=st3+st2[i]
    return st3
st=input("Enter a String:")
print("Converted string:"+capitalize(st))