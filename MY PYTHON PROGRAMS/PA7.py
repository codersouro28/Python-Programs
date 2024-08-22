def disc(price):
	if(price>5000):
		d=0.05*price
	elif(price>10000):
		d=0.1*price
	print("Discount=%0.2f"%d)
	amt=price-d
	return (amt)
price=float(input("Enter the price:"))
print("Amount=%0.2f"%disc(price))
		
	