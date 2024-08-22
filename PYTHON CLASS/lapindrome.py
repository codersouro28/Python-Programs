t=int(input())
for i in range(t):
    s=input()
    if(len(s)%2==0):
        (fs,ls)=(s[:len(s)//2],s[len(s)//2:])
    else:
        (fs,ls)=s[:len(s)//2],s[len(s)//2+1:]
    fq={}
    lq={}
    l=[]
    for ch in fs:
        fq[ch]=fq.get(ch,0)+1
    for cha in ls:
        lq[cha]=lq.get(cha,0)+1 
    if(fq==lq):
        print("YES")
    else:
        print("NO")
