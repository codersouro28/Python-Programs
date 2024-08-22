print("Enter elements of first list")
l1=list(map(int,input().split()))
print("Enter elements of second list")
l2=list(map(int,input().split()))

print ("The elements of list 1 is : " + str(l1))
print ("The elements of list 2 is : " + str(l2))

res = sorted(l1 + l2)
 
print ("The combined sorted list is : " + str(res))
