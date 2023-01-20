# Generating a range of numbers
print("Generating a range of numbers from 0 to 10...")
for i in range(10):
    print(i,end=" ")

print("\n")

# Specifying a start and stop value
print("Specifying a start and stop value...")
for i in range(2, 10):
    print(i,end=" ")

print("\n")

# Specifying a step value
print("Specifying a step value...")
for i in range(0, 10, 2):
    print(i,end=" ")

print("\n")

# Using range() with a list
print("Using range() with a list for number from 0 to 5...")
my_list = list(range(5))
print(my_list)

print("\n")

# Using range() with the len() function
print("Using range() with the len() function...")
for i in range(len(my_list)):
    print(my_list[i],end=" ")
