def week(dn):
	if(dn==1):
		day="Sunday"
	elif(dn==2):
		day="Monday"
	elif(dn==3):
		day="Tuesday"
	elif(dn==4):
		day="Wednesday"
	elif(dn==5):
		day="Thursday"
	elif(dn==6):
		day="Friday"
	else:
		day="Saturday"
	return day
dn=int(input("Enter the day number:"))
print("Weekday="+week(dn))