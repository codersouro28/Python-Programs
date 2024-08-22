def salary(sal,yos):
	if(yos>5):
		netsal=(0.05*sal)+sal
	else:
		netsal=sal
	return (netsal)
sal=float(input("Enter the salary:"))
yos=int(input("Enter the year of service:"))
print("Net salary=%0.2f"%salary(sal,yos))
	