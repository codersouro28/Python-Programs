def ftoc(f):
	cen=(5*(f-32))/9
	return cen
f=float(input("Enter the temperature:"))
print("Farenheit=%0.2f"%ftoc(f))