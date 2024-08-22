class Rectangle:
    
    def __init__(self,l,b):
        self.l=l
        self.b=b
        
    def area(self):
        return self.l * self.b
    
    def peri(self):
        return 2*(self.l + self.b)

l=int(input("Enter the length: "))
b=int(input("Enter the breadth: "))    
rec=Rectangle(l,b)
print("Area=",rec.area())
print("Perimeter=",rec.peri())