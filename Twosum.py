a=[2,3,4,5,6]
t=int(input("enter target:"))
for i in range(len(a)):
    for j in range(i+1,len(a)):
        if(a[i]+a[j]==t):
            print(a[i],a[j])