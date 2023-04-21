//Implementation of Generic programming.

import java.util.ArrayList;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class Stack<T> {
    private ArrayList<T> items;

    public Stack() {
        items = new ArrayList();
    }

    public void push(T item) {
        items.add(item);
    }

    public T pop() {
        if (isEmpty()) {
            throw new NoSuchElementException("Stack is empty");
        }
        return items.remove(items.size() - 1);
    }

    public T peek() {
        if (isEmpty()) {
            throw new NoSuchElementException("Stack is empty");
        }
        return items.get(items.size() - 1);
    }

    public boolean isEmpty() {
        return items.isEmpty();
    }

    public int size() {
        return items.size();
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Stack<Double> op = new Stack();
        int choice = 0;

        System.out.println("Enter 1 to push an element onto the stack");
        System.out.println("Enter 2 to pop an element from the stack");
        System.out.println("Enter 3 to peek at the top element of the stack");
        System.out.println("Enter 4 to check if the stack is empty");
        System.out.println("Enter 5 to get the size of the stack");
        System.out.println("Enter 6 to exit");

        do {
            System.out.print("Enter your choice: ");
            choice = input.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter the element to push: ");
                    double element = input.nextDouble();
                    op.push(element);
                    break;
                case 2:
                    System.out.println("Popped element: " + op.pop());
                    break;
                case 3:
                    System.out.println("Top element: " + op.peek());
                    break;
                case 4:
                    if (op.isEmpty())
                        System.out.println("Stack is empty");
                    else
                        System.out.println("Stack is not empty");
                    break;
                case 5:
                    System.out.println("Size of stack: " + op.size());
                    break;
                case 6:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        } while (choice != 6);
    }
}