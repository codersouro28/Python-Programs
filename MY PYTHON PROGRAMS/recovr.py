class Rectangle:
    
    def __init__(self,l,b):
        self.l=l
        self.b=b
        
    
    def __gt__(self,ot):
        a1 = self.l * self.b
        a2 = ot.l * ot.b
        
        return a1>a2

'''l=int(input("Enter the length: "))
b=int(input("Enter the breadth: ")) '''   
rec1=Rectangle(10,20)
rec2=Rectangle(10,30)

if (rec1>rec2):
    print("Area of rec1 is greater")
else:
    print("Area of rec2 is greater")
