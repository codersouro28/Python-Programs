import string
f1=open("myfile.txt","r")
t=f1.read()
con=0
vow=0
d=0
p=0
w=0
for x in t:
    if x.isalnum():
        if x.isalpha():
            if x=='a' or x =='e' or x=='i' or x=='o' or x=='u' or x=='A' or x =='E' or x=='I' or x=='O' or x=='U':
                vow+=1
            else:
                con+=1
        else:
            d+=1
    else:
        if x in string.punctuation:
            p+=1
        elif x in string.whitespace:
            w+=1
print("Vowel=",vow)
print("Consonant=",con)
print("Digits=",d)
print("Punctuation=",p)
print("Whitespace=",w)