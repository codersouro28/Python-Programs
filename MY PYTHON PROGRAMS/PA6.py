def discount(q):
	#price before discount
    price=q*100
    if price>1000:
        amt=(0.1*price)-price     #price after discount
    return (amt)
q=int(input("Enter the quantity"))
print("Total cost=%0.2f"%discount(q))