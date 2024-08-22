s=input("Enter a String:")
st=s.split()
max=len(st[0])
lng=" "
for i in st:
	if(len(i)>max):
		max=len(i)
		lng=i
print("Longest word:"+lng)
print("Length of Longest word:",max)
	