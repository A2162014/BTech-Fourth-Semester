#Creating a list
emptylist = []
mylist = [20, 20, 'H', "Hello"]
nestedlist = [[1, 2], mylist]
print("Created lists:")
print("emptylist:", emptylist)
print("mylist:", mylist)
print("nestedlist:", nestedlist)
print("Concatenating mylist and nestedlist:", mylist + nestedlist)
print("Repeating the elements of a list:", mylist*3)

#List as an input
print("\nList as an input:",end="")
inputlist = list(map(int, input("Enter elements(separate by space):").split()))
print(inputlist)

#Accessing elements
print("In the nested list: ")
print("(Normal)nestedlist[0]:", nestedlist[0])
print("(Negative)nestedlist[-2]:", nestedlist[-2])

#adding elements
print()
print("Adding elements into empty list:")
emptylist.append(1)
for i in range(3, 6):
    emptylist.append(i)
print("emptylist:", emptylist)
emptylist.insert(1, 2)
print("Adding at index emptylist[1]:", emptylist)
print("Extending mylist with emptylist:", mylist.extend(emptylist))

#Using Slicing
print("Slicing mylist[:]:", mylist[:])
print("Reverse using slicing[::-1]:", mylist[::-1])
print("Slicing using indices[1:3]:", mylist[1:3])

#list comprehension
print()
print("Creating a newlist[] using list comprehension:")
newlist = [i for i in emptylist if i%2 == 0]
print("newlist with even elements in emptylist:", newlist)

#Using the built-in functions
print("\nUsing functions:")
print("Length using len():", len(mylist))
print("Removing an element using remove:", mylist.remove(20))
print("Removing the last element using pop:", mylist.pop())
print("Using index():",mylist.index(3))
print("Using reverse on",emptylist,":")
emptylist.reverse()
print(emptylist)
