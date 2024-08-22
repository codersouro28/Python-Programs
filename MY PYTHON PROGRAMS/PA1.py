def even(n):
    if n%2 == 0:
        return True
def odd(n):
    if not even(n):
        return True
num=int(input("Enter the number"))
if even(num):
    print(num,"is Even")
else:
    print(num,"is Odd")