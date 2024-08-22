def grading(marks):
	if(marks>90):
		grade='A'
	elif(marks>80):
		grade='B'
	elif(marks>=60):
		grade='C'
	else:
		grade='D'
	return grade
marks=int(input("Enter the percentage marks:"))
print("Grade="+grading(marks))
	