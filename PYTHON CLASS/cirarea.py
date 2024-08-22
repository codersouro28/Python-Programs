pi=22/7
def circumference(r):
    circum=2*pi*r
    return circum
def area(r):
    area=pi*r*r
    return area
rad=int(input("Enter the radius:"))
print("Circumference=",circumference(rad))
print("Area=",area(rad))
