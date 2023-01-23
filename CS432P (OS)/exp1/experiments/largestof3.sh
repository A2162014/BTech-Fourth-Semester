# Exp-1: B

# 3) Write a shell script to find the largest of three numbers.

# Done by: Ashvath S.P
# Date: 22-01-2023

echo "Enter the first number: "
read num1
echo "Enter the second number: "
read num2
echo "Enter the third number: "
read num3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]; then
  echo "The largest number is: $num1"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]; then
  echo "The largest number is: $num2"
else
  echo "The largest number is: $num3"
fi
