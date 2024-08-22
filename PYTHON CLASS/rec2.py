student={'Souro':{'C':85,'Python':88,'java':90,'C++':80},
          'Smita':{'C':82,'Python':89,'java':84,'C++':85},
          'Sounak':{'C':83,'Python':87,'java':92,'C++':82}
          }
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