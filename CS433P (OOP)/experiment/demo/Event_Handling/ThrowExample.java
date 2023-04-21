// THROW KEYWORD:
public class ThrowExample {
    public static void main(String[] args) {
        try {
            int age = -10;
            if (age < 0) {
                throw new IllegalArgumentException("Age cannot be negative.");
            }
            System.out.println("Age is: " + age);
        } catch (IllegalArgumentException e) {
            System.out.println("IllegalArgumentException occurred: " + e.getMessage());
        }
    }
}
