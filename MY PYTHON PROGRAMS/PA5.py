def leapYear(yr):
    if (yr%4==0 and yr%100!=0) or (yr%400==0 and yr%100!=0):
        return(True)
    else:
        return(False)
yr=int(input("Enter the year:"))
if (leapYear(yr)==(True)):
    print(yr,"is Leap Year")
else:
    print(yr,"is Not Leap Year")