def ctof(cen):
	f=((cen*9)/5)+32
	return f
cen=float(input("Enter the teperature:"))
print("Farenheit=%0.2f"%ctof(cen))