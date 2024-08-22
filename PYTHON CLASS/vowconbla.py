s=input("ENter a string: ")
vowels=['A','E','I','O','U']
s=s.upper()
vow,con,spc=0,0,0

for ch in s:
    if ch in vowels:
        vow+=1
    elif ch not in vowels and ch.isalpha():
        con+=1
    elif ch.isspace():
        spc+=1
print(f"Vowels - {vow}, Consonants-{con}, Space-{spc}")