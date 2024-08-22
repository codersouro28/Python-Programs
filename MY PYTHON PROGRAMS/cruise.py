t=int(input("Enter the value of T in hours: "))
totalGuestsPresent=0
maxi=0

print("Enter the elements in list E[]")
e=list(map(int,input().split()))
print("Enter the elements in list L[]")
l=list(map(int,input().split()))
    
for i in range(t):
    totalGuestsPresent+=e[i]-l[i]
        
    if(totalGuestsPresent>maxi):
        maxi=totalGuestsPresent
            
    print(f'Entry: {e[i]} || Exit:{l[i]} \n Number of guests on ship: {totalGuestsPresent}')

    
print("Maximum number of guests in ",t,"hours: ",maxi)    