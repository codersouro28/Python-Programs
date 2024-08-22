'''def binToDec(n):
    return int(n,2)'''
        
def substring(st):
    res={st[i: j] for i in range(len(st))
                    for j in range(i+1,len(st)+1)}
    return res

st=input()  
res=substring(st)
for item in res:
    print(res)
    
'''def isOdd(n):
    if(binToDec(n)%2 != 0):
        return True
    else:
        return False
    
    
        
for _ in range(int(input())):
    bin=input()
    flag=False
    
    res=substring(bin)
    
    for item in res:
        if(isOdd(item) == True):
            flag=True
            break
    if(flag == True):
        print("Yes")
    else:
        print("No")'''
        