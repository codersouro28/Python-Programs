import string
s=input("Enter a String:")
v=0
c=0
d=0
p=0
w=0
for i in s:
    if i in 'aeiou':
        v+=1
    if i.isalpha() and i not in 'aeiou':
        c+=1
    if i.isdigit():
        d+=1
    if i in string.punctuation:
        p+=1
    if i in string.whitespace:
        w+=1
print("No of vowels:",v)
print("No of consonants:",c)
print("No of digits:",d)
print("No of punctuations:",p)
print("No of whitespace:",w)