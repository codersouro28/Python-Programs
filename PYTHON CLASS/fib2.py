def fibonacci(n):
    a=0
    b=1
    c=0
    l=[]
    print("-------Fibonacci Series-------")
    for i in range(n):
        print(a,end=" ")
        c=a+b
        a=b
        b=c
n=int(input("Enter the range"))
fibonacci(n)              