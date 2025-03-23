d=[1,1,2,2,3]
i=0
for j in range(i+1,len(d)):
        if(d[i]!=d[j]):
            d[i+1]=d[j]
            m=i+1
            i+=1
print(d[0:m])