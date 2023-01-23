# Exp-1: B

# 7) write a shell script to swap numbers without temp.

# Done by: Ashvath S.P
# Date: 22-01-2023

read -p "Enter first number:" num1
read -p "Enter second number:" num2

num1=`expr $num1 + $num2`
num2=`expr $num1 - $num2`
num1=`expr $num1 - $num2`

echo "First number after swap: $num1"
echo "Second number after swap: $num2"
