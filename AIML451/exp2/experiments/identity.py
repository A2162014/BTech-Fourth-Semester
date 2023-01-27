x = 10
y = 11 
z = 10
print(x is y) # it compare memory address of x and y 
print(x is z) # it compare memory address of x and z
x1 = 5
y1 = 5
x2 = 'Hello'
y2 = 'Hello'
x3 = [1,2,3]
y3 = [1,2,3]
print(x1 is not y1) # prints False
print(x2 is y2) # prints True
print(x3 is y3) # prints False
x = 10
y = 11 
z = 10
print(x is not y) # it campare memory address of x and y 
print(x is not z) # it campare memory address of x and z
