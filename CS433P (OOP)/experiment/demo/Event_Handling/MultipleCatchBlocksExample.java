// MULTIPLE CATCH
public class MultipleCatchBlocksExample {
    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3 };
        try {
            int result = numbers[3] / 0; // This will throw an ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception occurred: " + e.getMessage());
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out Of Bounds Exception occurred: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Some other Exception occurred: " + e.getMessage());
        }
    }
}