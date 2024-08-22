def integer(n):
	if n>0:
		num="Positive"
	elif(n<0):
		num="Negative"
	else:
		num="Zero"
	return num
n=int(input("Enter a number"))
print(integer(n))