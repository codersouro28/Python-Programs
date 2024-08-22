def maximum(a,b,c,d,e):
    max=a
    if(b>max):
        max=b

    if(c>max):
        max=c
     
    if(d>max):
        max=d
    else:
        max=e
    return max
a,b,c,d,e = map(int,input("Enter five numbers:").split())		
print("Larger=",maximum(a,b,c,d,e))		
		
	 