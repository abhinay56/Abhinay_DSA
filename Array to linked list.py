class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

a= [1, 2, 3, 4, 5]
head = Node(a[0])
temp = head
for i in range(1, len(a)):
    temp.next = Node(a[i])
    temp = temp.next

while head:
    print(head.data, end=" -> ")
    head = head.next
print("NULL")
