while True:
    print("======================================")
    print("Enter 1 for Celcius to Fahrenheit")
    print("Enter 2 for Fahrenheit to Celcius")
    print("Enter 3 for Celcius to Reaumur")
    print("Enter 4 for Reaumur to Celcius")
    print("Enter 5 for Fahrenheit to Reaumur")
    print("Enter 6 for Reaumur to Fahrenheit")
    print("Enter 0 to exit")
    print("======================================")
    print( )
    opt=int(input("enter your option: "))
    if opt==0:
        break
    elif opt<1 or opt>6:
        print("INVALID OPTION")
        print( )
        continue
    t=float(input("enter the temperature:"))
    if opt==1:
        r=(t*9)/5+32
    elif opt==2:
        r=(t-32)*5/9
    elif opt==3:
        r=4*t/5
    elif opt==4:
        r=4*t/5
    elif opt==5:
        r=4*(t-32)/9
    else:
        r=(9*t)/4+32
    print("Result= ",r)
    print( )