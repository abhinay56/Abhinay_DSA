a=[12, 5, 7, 10, 3]
for i in range(len(a)):
    count=0
    for j in range(len(a)):
        if(a[j]<a[i]):
            count+=1
    print(f"Number of elements are smaller than{a[i]}: {count}")