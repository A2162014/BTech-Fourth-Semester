# Exp-1: B

# 2) Write a shell script to find the largest of two numbers.

# Done by: Ashvath S.P
# Date: 22-01-2023

read -p "Enter the first number: " num1
read -p "Enter the second number: " num2

if [ $num1 -gt $num2 ]; then
  echo "Largest numeber is $num1"
else
  echo "Largest number is $num2"
fi

