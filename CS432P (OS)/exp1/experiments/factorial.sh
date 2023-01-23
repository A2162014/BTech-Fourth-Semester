# Exp-1: B

# 9) write a shell script to find the factorial.

# Done by: Ashvath S.P
# Date: 22-01-2023

# Take input from the user
read -p "Enter a number: " num

# Initialize factorial variable
factorial=1

# Use for loop to calculate the factorial
for((i=1;i<=num;i++))
do
  factorial=$((factorial * i))
done

# Print the factorial
echo "The factorial of $num is $factorial"


