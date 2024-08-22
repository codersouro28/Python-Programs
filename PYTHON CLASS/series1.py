n=int(input("Enter the range: "))
ser=0
for i in range(n):
    if(i%2==0):
        ser= ser*10 +1 
    else:
        ser=ser * 10 
    print(ser,end=" ")