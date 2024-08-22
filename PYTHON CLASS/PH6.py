def parcel(wt):
    if(wt<=20):   
        chrg=25
    else:
        net=wt-20
        times=net/10
        rem=net%10
        if(rem!=0):
            times=times+1
        chrg=25+times*5
    return chrg
wt=int(input("Enter the weight"))
print("Cost=%0.2f"%parcel(wt))