def bill(calls):
    if(calls<=75):
        charge=250
    elif(calls<=150):
        charge=250+(calls-75)*0.80
    elif(calls<=225):
        charge=250+(calls-75)*0.80+(calls-150)*1.00
    else:
        charge=250+(calls-75)*0.80+(calls-150)*1.00+(calls-225)*1.20    
    return charge
calls=int(input("Enter the calls:"))
print("Charge=%0.2f"%bill(calls))
	