s=input("Enter a string: ")
up,low,num=0,0,0

for ch in s:
    if ch.isupper():
        up+=1
    elif ch.islower():
        low+=1
    elif ch.isnumeric():
        num+=1
print(f"Uppercase - {up}, LowerCase - {low}, Numeric-{num}")