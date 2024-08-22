def roadtax(price):
	if(price>100000):
		tax=0.15*price
	elif(price>50000):
		tax=0.1*price
	else:
		price=0.05*price
	return tax
price=float(input("Enter the price:"))
print("Road Tax=%0.2f"%roadtax(price))