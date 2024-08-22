def disc(price):
	if(price>5000):
		disc=0.1*price
	else:
		disc=0.05*price
	amt=price-disc   #stores final amount
	return amt
price=float(input("Enter the purchase amount:"))
print("Net payable amount=%0.2f"%disc(price))
	