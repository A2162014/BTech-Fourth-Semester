# Exp-1: B

# 6) write a shell script to swap numbers using temp variables.

# Done by: Ashvath S.P
# Date: 22-01-2023

a=$1
b=$2
# Store the first number in a temporary variable
temp=$a

# Assign the second number to the first variable
a=$b

# Assign the temporary variable (which holds the original first number) to the second variable
b=$temp

echo "The swapped numbers are: $a and $b"
