//Implementation of Generic programming.

import java.util.ArrayList;
import java.util.NoSuchElementException;

public class Stack<T> {

    private ArrayList<T> items;

    public Stack() {
        items = new ArrayList<>();
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
        Stack<Integer> intStack = new Stack<>();
        intStack.push(61);
        intStack.push(87);
        intStack.push(32);
        System.out.println("Top element: " + intStack.peek());
        System.out.println("Size of stack: " + intStack.size());
        while (!intStack.isEmpty()) {
            System.out.println(intStack.pop());
        }
    }
}
