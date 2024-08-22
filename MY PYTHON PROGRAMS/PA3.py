
import math
def triangleArea(a,b,c):
	s=(a+b+c)/2
	area=math.sqrt(s*(s-a)*(s-b)*(s-c))
	return area
   
a,b,c=map(float,input("Enter the three sides of a triangle:").split())
print("Area=%0.2f"%triangleArea(a,b,c))
