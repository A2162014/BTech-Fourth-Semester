# Exp-1: B

# 4) write a shell script to check if a given number is odd or even.

# Done by: Ashvath S.P
# Date: 22-01-2023

read -p "Enter a number: " num

if [ $(( num % 2 )) -eq 0 ]; then
  echo "The number $num is even."
else
  echo "The number $num is odd."
fi
