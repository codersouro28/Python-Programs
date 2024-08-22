def tax(sal):
	if(sal<5000):
		tax=0.00
	elif(sal<10000):
		tax=75.00
	elif(sal<20000)
		tax=125.00
	else:
		tax=180.00
	return tax
sal=float(input("Enter the basic salary"))
print("Tax=Rs%0.2f"%tax(sal))