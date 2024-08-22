def mvs(l):
    mean,var,sd=0,0,0
    mean=sum(l)/len(l)
    for i in l:
        var+= (i-mean)**2
    var/=len(l)
    sd=var**0.5
    return (mean,var,sd)
l=list(map(int,input("Enter the list of numbers: ").split()))   
(mean,var,sd)=mvs(l)
print(f"Mean={mean},Variance={var},Standard Deviation={sd}")