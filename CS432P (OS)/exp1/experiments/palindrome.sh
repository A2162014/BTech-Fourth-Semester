# Exp-1: B

# 8) write a shell script to check a number for palindrome.

# Done by: Ashvath S.P
# Date: 22-01-2023

# Take user input
read -p "Enter a number:" num

# Reverse number using using rev command
reverse=$(echo $num | rev)

# Check if the number is equal to its reverse
if [ $num -eq $reverse ]; then
    echo "Number is a palindrome"
else
    echo "Number is not a palindrome"
fi
