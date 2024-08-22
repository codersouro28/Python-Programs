import re
def incDate(dt):
    days={1:31,2:28,3:31,4:30,5:31,6:30,7:31,8:31,9:30,10:31,11:30,12:31}
    d,m,y=map(int,re.split("[./-]",dt))
    sep=dt[-5]
    if(y%400==0)or(y%100!=0 and y%4==0):
        days[2]=29
    if(d<days[m]):
        d+=1
    else:
        d=1
        m+=1
        if m==13:
            m=1
            y+=1        
    newdate=str(d).zfill(2)+sep+str(m).zfill(2)+sep+str(y)
    return newdate
    
date=input("Enter any date in dd/mm/yyyy format:")
date2=incDate(date)
print(date2)
