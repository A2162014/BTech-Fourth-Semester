# Tuple example
tuple = (1, "hello", 3.14, [1, 2, 3])
print("Tuple example:", tuple)

# List example
list = [4, "world", 2.718, (4, 5, 6)]
print("List example:", list)

# Set example
my_set = {7, "foo", 3.14, "ashvath"}
print("Set example:", my_set)

# Dictionary example
dict = {'a': 10, 'b': "twenty", 'c': 3.14}
print("Dictionary example:", dict)

# Tuple operations
print("\nTuple operations")
# check if element exist in tuple
print("element 1 in tuple? ", 1 in tuple)
# convert tuple to a string representation
element = 1
count = tuple.count(element)
print("No. of occurrences of element ",element," in tuple: ",count)
# find the index of an element in tuple
print("Index of 'hello' in tuple:",tuple.index("hello"))

# List operations
print("\nList operations")
# Modifying list elements
list[0] = 10
print("Modified list:", list)
# get the length of the list
list_length = len(list)
print("length of list:", list_length)
# find the index of an element in list
print("Index of 'world' in list:",list.index("world"))

# Set operations
print("\nSet operations")
# Removing elements from set
my_set.remove(7)
print("set after removing 7:", my_set)
# Clear the set
my_set.clear()
print("set after clearing:", my_set)
# Create a set from a list
my_set  = set(list)
print("set after creating from list", my_set)

# Dictionary operations
print("\nDictionary operations")
# Accessing dictionary elements
print("Value of key 'b' in dict:", dict['b'])
# Delete a key from dictionary
del dict['a']
print("dict after deleting key 'a':", dict)
# Get all keys from dictionary
print("All keys in dict:", dict.keys())
