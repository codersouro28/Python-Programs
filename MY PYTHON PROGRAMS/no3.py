class Student:
    
    def __init__(self,name,age,grade):
            self.name=name
            self.age=age
            self.grade=grade
    
    def display(self):
        print("Name of student=",self.name)
        print("Age of student=",self.age)
        print("Grade of student=",self.grade)
        
namel=[]
agel=[]
gradel=[]
for i in range(5):
    print("Enter for Student-",i+1)
    name=input("Enter the name")
    namel.append(name)
    age=input("Enter the age")
    agel.append(age)
    grade=input("Enter the grade")
    gradel.append(grade)
 
 
for i in range(5): 
    stu=Student(namel[i],agel[i],gradel[i])
    print("Details of student- ",i+1)
    stu.display()
    print("--------")