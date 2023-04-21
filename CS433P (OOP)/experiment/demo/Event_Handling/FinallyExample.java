// FINALLY BLOCK:
public class FinallyExample {
    public static void main(String[] args) {
        try {
            int[] numbers = { 1, 2, 3 };
            int result = numbers[3]; // This will throw an ArrayIndexOutOfBoundsException
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out Of Bounds Exception occurred: " + e.getMessage());
        } finally {
            System.out.println("This block always gets executed.");
        }
    }
}