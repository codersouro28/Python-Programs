student={}
n=int(input("Enter the number of students:"))
for i in range (n):
    name=input("Enter name of student:")
    m={}
    for j in range(4):
        sub=input("Enter subject: ")
        marks=int(input("Enter marks of: "+sub))
        m[sub]=marks
    student[name]=m
print(student)
td={}
for k,v in student.items():
    tot=0
    for i in v.values():
        tot+=i
    td[k]=tot
max=0
for k,v in td.items():
    if v>max:
        max=v
        k1=k
print(k1,":",max)    