n=int(input("Enter the number of elements: "))
a=list(map(int, input("Enter the elements of the array: ").split()))
squares=[x * x for x in a]
squares.sort()
print("Sorted squares of the array elements:", squares)
