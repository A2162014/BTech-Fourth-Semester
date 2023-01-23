# Exp-1: B

# 5) write a shell script to create a calculator.

# Done by: Ashvath S.P
# Date: 22-01-2023

echo "**********CALCULATOR**********"
echo""
PS3="Please select an operation: "
select opt in "Addition" "Subtraction" "Multiplication" "Division" "Quit"
do
    case $opt in
        "Addition")
	    echo""
            read -p "Enter the first number:" num1
            read -p "Enter the second number:" num2
            echo "Result = $num1 + $num2 = $((num1 + num2))"
	    echo""
            ;;
        "Subtraction")
	    echo""
            read -p "Enter the first number:" num1
            read -p "Enter the second number:" num2
            echo "Result = $num1 - $num2 = $((num1 - num2))"
	    echo""
            ;;
        "Multiplication")
	    echo""
            read -p "Enter the first number:" num1
            read -p "Enter the second number:" num2
            echo "Result = $num1 * $num2 = $((num1 * num2))"
	    echo""
            ;;
        "Division")
	    echo""
            read -p "Enter the first number:" num1
            read -p "Enter the second number:" num2
            if [ $num2 -eq 0 ]; then
                echo "Error: Cannot divide by zero."
            else
                echo "Result = $num1 / $num2 = $((num1 / num2))"
            fi
	    echo""
            ;;
        "Quit")
            break
            ;;
        *) echo "Invalid option";;
    esac
done
