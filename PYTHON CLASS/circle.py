from math import pi
def circle(r):
    peri=2*pi*r 
    area=pi*r*r
    return(peri,area)
radius=int(input("Enter the radius of circle"))
(peri,area)=circle(radius)
print(f"Perimeter={peri:.2f},Area={area:.2f}")