a=[1,2,3,0,5]
n=len(a)
sum=0
for i in range(len(a)):
    sum+=a[i]
N=(n*(n+1))/2
miss=N-sum
print(miss)