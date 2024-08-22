import math
def factorize(k):
    n=abs(k)
    pf=[]
    while n%2 == 0:
        pf.append(2)
        n//=2
    
    if n>2:    
        for i in range(3,n//2 + 2):
            while n%i == 0:
                pf.append(i)
                n/=i

    if n>2 :
        pf=[1,n]
        return pf
        
    return (pf)
    

def sqr(pf,k):
    
    c,root,per=1,1,1
    print(pf)
    if math.sqrt(abs(n)) == int(math.sqrt(abs(n))) :
        if(k>0):
            print("x=",int(math.sqrt(n)),"y=",1)
        else:    
            print("x=",int(math.sqrt(abs(n))),"y=-",1)
    else:
        for i in pf:
            c=pf.count(i)
        
            if(c%2==0):
                per=per * i**c
            elif(c%2 != 0 or c<=1):
                per=per * i ** (c-1)
                root = root * i
        
            pf=list(filter((i).__ne__ ,pf))
        if k>0:        
            print(f"{k}={int(per**(0.5))}√{root}")
            print("x=", int(per** 0.5)," y=",root)
        else:
            print(f"{k}={int(per**(0.5))}√-{root}")
            print("x=", int(per**(0.5))," y=-",root)

n=int(input("Enter a number: "))
pf=factorize(n)
sqr(pf,n)
