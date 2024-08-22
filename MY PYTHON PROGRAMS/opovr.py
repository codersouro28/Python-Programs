class Overload:
    def __init__(self,a):
        self.a=a
    
    def __add__(self,ob):
        a=self.a+ob.a
        t=Overload(a)
        
        return t
        
    def __sub__(self,ob):
        a=self.a-ob.a
        t=Overload(a)
        return t
    
    def __mul__(self,ob):
        a=self.a*ob.a
        t=Overload(a)
        return t
        
a=Overload(3)
b=Overload(5)

sumr=a+b
subr=a-b
mulr=a*b

print("Addition- ",sumr.a)
print("Difference- ",subr.a)
print("Product- ",mulr.a)        
