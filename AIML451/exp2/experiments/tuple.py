#Creating a tuple
emptytuple = ()
mytuple = (1, 'h', "Hello")
nestedtuple = ([1, 2], mytuple)
print("Emptytuple:", emptytuple)
print("mytuple:", mytuple)
print("nestedtuple:", nestedtuple)
mytuple1 = 1, 'Hi'
print("By Tuple packing:", mytuple1)
list1 = [1, 2, 3]
print("Using tuple():", tuple(list1))
tuple2 = (1,)
print("Tuple with one element:", tuple2)
print("Concatenating nestedtuple and mytuple:", nestedtuple + mytuple)
print("Repeating the elements of a tuple:", mytuple*3)
#Tuple as an input

print("\nTuple as an input:",end="")
inputtuple = tuple(map(int, input("Enter elements(separate by space):").split()))
print(inputtuple)
#Using Slicing
print("\nSlicing mytuple[:]:", mytuple[:])
print("Reverse using slicing[::-1]:", mytuple[::-1])
print("Slicing using indices[1:3]:", mytuple[1:3])
#Accessing elements
print("\nAcccessing elements:")
print("In nestedtuple[0]:", nestedtuple[0])
print("In nestedtuple[-2]:", nestedtuple[-2])
a, b, c = mytuple
print("By tuple unpacking:", a, b, c)
#Using the built-in functions
print("\nUsing the built-in functions: ")
print("Length of mytuple:", len(mytuple))
print("Sorting a tuple using sorted():", sorted((2, 1, 0)))
print("Using max():", max((8, 23, 1)))
print("Using min():", min((3, 1, 2)))
print("Using sum():", sum((3, 4, 3)))
print("Using all():", all((3, 0, 9)))
print("Using any():", any((2, 0, 9)))
print("Using count():", (3, 1, 2, 1).count(1))
