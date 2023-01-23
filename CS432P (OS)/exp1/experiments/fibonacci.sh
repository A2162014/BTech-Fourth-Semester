# Exp-1: B

# 1) Write a shell script to generate the fibonacci sequence.

# Done by: Ashvath S.P
# Date: 22-01-2023

echo "Enter the number of terms:"
read n

a=0
b=1

echo "The Fibonacci sequence up to $n terms is:"

for (( i=0; i<n; i++ ))
do
   echo -n "$a "
   fn=$((a + b))
   a=$b
   b=$fn
done

echo ""
