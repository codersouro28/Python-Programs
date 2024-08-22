def createStack():
    stack=[]
    return stack

def push(stack,n):
    stack.append(n)

def pop(stack):
    top=stack[-1]
    del stack[-1]
    return top
    
    
def isEmpty():
    if len(stack)==0:
        return True

stack=createStack()    
print('''Enter 1 -> push 
2 -> pop
0->Exit''')
while(True):
    n=int(input("Enter your choice: "))
    if(n==1):
        k=int(input("Enter the element you want to Push"))
        push(stack,k)
        continue
    elif(n==2):
        if(not isEmpty()):
            popped=pop(stack)
            print("Popped element: ",popped)
            continue
        else:
            print("Stack underflow")
    elif(n==0):
        print("Exitting Stack Operations")
        break
    else:
        print("Wrong Choice")
        continue
