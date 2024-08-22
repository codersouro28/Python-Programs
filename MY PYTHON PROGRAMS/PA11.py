def work(age,sex,ms):
	if(sex=='F'):
		serve="Only in urban areas"
	else:   
		if(sex=='M'):
			if(age>=20 and age<40):
				serve="Anywhere"
			else:
				if(age>=40 and age<60):
					serve="Only in Urban Areas"
				else:
					serve="Error"
		else:
			serve="Error"
	return serve
age=int(input("Enter the age:"))
sex=str(input("Enter the sex:"))
ms=str(input("Enter the Marital Status:"))
print("Place of service="+work(age,sex,ms))
		
	