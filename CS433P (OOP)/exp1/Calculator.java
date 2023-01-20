/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author 2162014
 */
import java.util.Scanner;

public class Calculator {

    public double Operations(char o, double r, double n1, double n2) {
        // conditions to perform arithmetic operations
        switch (o) {
            case '+' -> {
                System.out.println("\nAddition: " + n1 + " + " + n2);
                r = n1 + n2;
                break;
            }
            case '-' -> {
                System.out.println("\nSubtraction: " + n1 + " - " + n2);
                r = n1 - n2;
                break;
            }
            case '*' -> {
                System.out.println("\nMultiplication: " + n1 + " * " + n2);
                r = n1 * n2;
                break;
            }
            case '/' -> {
                System.out.println("\nDivision: " + n1 + " / " + n2);
                r = n1 / n2;
                break;
            }
            default -> {
                System.out.println("\nInvalid input!\n");
                break;
            }
        }
        return r;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        Calculator obj = new Calculator();
        System.out.print("\n-+-+-+-+Calculator-+-+-+-+\n");
        // Menu
        System.out.print("\nOperations:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        // get numbers from user
        System.out.print("\nEnter first number: ");
        double num1 = scn.nextDouble();
        System.out.print("\nEnter second number: ");
        double num2 = scn.nextDouble();
        // get operation from user
        System.out.print("\nChoose operation(+,-,*,/): ");
        char op = scn.next().charAt(0);
        double result = 0, ans = obj.Operations(op, result, num1, num2);
        // display output to user
        System.out.printf("\nResult: %.2f \n", ans);
        System.out.print("\n");
    }
}
