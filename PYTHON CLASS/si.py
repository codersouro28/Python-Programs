def simple(p,t,r=6.5):
    return ((p*r*t)/100)
p=float(input("Enter the Principal: "))
t=int(input("Enter the time: "))
print("Simple Interest=%0.2f"%simple(p,t))