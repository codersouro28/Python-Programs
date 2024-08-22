def square(l,b):
    if l==b:
        return True
    else:
        return False

l,b= map (int,input("Enter the length and breadth:").split())
if square(l,b)==True:
    print("Square")
else:
    print("Rectangle")