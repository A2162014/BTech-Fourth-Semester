# Creating a dictionary
emptydict = {}
mydict1 = {1: 'A', 2: 'B', 3: 'C'}
mydict2 = {4: 'D', 'E': 5}
mydict3 = dict([(6, 'F'), (7, 'G')])
nesteddict = {1: mydict1, 2: mydict2}
inputdict = {}

# Taking dict as input
keys = []
keys = list(map(int, input("Enter keys: ").split()))
for i in keys:
    inputdict[i] = input("Enter value for " + str(i) + ": ")

print("Created dictionaries:")
print("Emptydict:", emptydict)
print("mydict1:", mydict1)
print("mydict2:", mydict2)
print("mydict3:", mydict3)
print("nesteddict:", nesteddict)
print("inputdict:", inputdict)

# Operations on dictionary
mydict2['E'] = 'E'
mydict2[5] = mydict2['E']
del mydict2['E']
print("\nAltering mydict2:", mydict2)

mydict3[8] = 'H'
mydict3[9] = ('I', 'J', 'K')
print("Adding elements to mydict3:", mydict3)

# Using built-in functions
print("\nUsing get() to access: mydict1.get(1): ", mydict1.get(1))
print("Using keys() on", mydict1, ":", mydict1.keys())
print("using values() on", mydict1, ":", mydict1.values())
print("Using items() on", mydict1, ":", mydict1.items())
print("Updating", mydict1, "with", mydict2, ":")
mydict1.update(mydict2)
print(mydict1)
print("Deleting a value using pop():", mydict1.pop(2), mydict1)
