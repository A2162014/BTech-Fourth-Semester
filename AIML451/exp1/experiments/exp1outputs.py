Python 3.11.1 (tags/v3.11.1:a7a450f, Dec  6 2022, 19:58:39) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
print("ashvath")
ashvath
print("CHRIST")
CHRIST
python --version
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    python --version
NameError: name 'python' is not defined
python -version
Traceback (most recent call last):
  File "<pyshell#3>", line 1, in <module>
    python -version
NameError: name 'python' is not defined
a=10
print(type(a))
<class 'int'>
import sys
python --version
Traceback (most recent call last):
  File "<pyshell#7>", line 1, in <module>
    python --version
NameError: name 'python' is not defined
import sys
print(sys.version)
3.11.1 (tags/v3.11.1:a7a450f, Dec  6 2022, 19:58:39) [MSC v.1934 64 bit (AMD64)]
a=10
print(type(a))
<class 'int'>
x=7
y=4
 z=x+y
 
SyntaxError: unexpected indent
z=x+y
print(z)
11
base=int(input("Enter base:"))
Enter base:25
length=int(input("Enter length:")
           )
Enter length:15
area=(base*length)/2
print(area)
187.5
x=int(input("Enter value of x:"))
Enter value of x:7
x=int(input("Enter value of x:"))
exit()
SyntaxError: multiple statements found while compiling a single statement
y=int(input("Enter value of x:"))

Enter value of x:5
sum=x+y
print(sum)
12
a=(1,"ashvath",13.5)
print(a)
(1, 'ashvath', 13.5)
b=[1,"ashvath",13.5]
print(type(b))
<class 'list'>
print(type(a))
<class 'tuple'>
c={1,"ashvath",13.5}


print(type(c))
<class 'set'>
d={color:"red",name:"ashvath",age:20}
Traceback (most recent call last):
  File "<pyshell#34>", line 1, in <module>
    d={color:"red",name:"ashvath",age:20}
NameError: name 'color' is not defined
d={colour:"red",name:"ashvath",age:20}
Traceback (most recent call last):
  File "<pyshell#35>", line 1, in <module>
    d={colour:"red",name:"ashvath",age:20}
NameError: name 'colour' is not defined

= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/var&lit.py
10
[1, 3, 5, 7, 9]
Hello World

= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/valchange.py
Initial value: 50
Updated value: 100

= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/valConst.py
Value of PI: 3.14
Value of Gravitational Force: 9.8

= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/boollit.py
True
False
5
8

= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/%op.py
HelloWorld

= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/%op.py
Hello World
Hello World

==== RESTART: C:/Users/ashva/AppData/Local/Programs/Python/Python311/inputoutput.py ====
Enter Employee Name:ashvath
Enter salary:25000
Enter Company name:christ



Printing Employee Details
Name Salary Company
ashvath 25000 christ

==== RESTART: C:/Users/ashva/AppData/Local/Programs/Python/Python311/inputoutput.py ====
Enter Employee Name:ashvath
Enter salary:25000.95
Enter Company name:christ


Printing Employee Details
Name Salary Company
ashvath 25000.95 christ
>>> 
= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/singlelineio.py
Enter yor name, Age, Percentage seperated by space ashvath 20 84

User Details: ashvath 20 84
>>> 
= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/singlelineio.py
Enter your name, Age, Percentage seperated by space ashvath 19 90

User Details: ashvath 19 90
>>> print(list(range(0)))
[]
>>> print(list(range(4)))
[0, 1, 2, 3]
>>> print(list(range(1,7)))
[1, 2, 3, 4, 5, 6]
>>> 
= RESTART: C:/Users/ashva/Work/christ/2nd year/4th sem/practicals/AIML451/exp1/experiments/stringop.py
he
o
hello ashvathhello ashvath
hello ashvathhow are you?
>>> list=[1,"hi","Python",2]
>>> print(type(list))
<class 'list'>
>>> print(list)
[1, 'hi', 'Python', 2]
>>> print(list[3:])
[2]
>>> print(list[0:2])
[1, 'hi']
>>> tup = ("hi","Python",2)
>>> print(tup[1:])
('Python', 2)
>>> d={1:'Jimmy',2:'Alex',3:'John',4:'Mike'}
>>> print(d)
{1: 'Jimmy', 2: 'Alex', 3: 'John', 4: 'Mike'}
>>> print(d.keys)
<built-in method keys of dict object at 0x000001FBFB2BD1C0>
