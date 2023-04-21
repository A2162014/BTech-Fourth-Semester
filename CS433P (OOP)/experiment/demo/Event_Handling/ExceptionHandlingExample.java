// EXCEPTION HANDLING:
public class ExceptionHandlingExample {
    public static void main(String[] args) throws Exception {
        try {
            int[] numbers = { 1, 2, 3 };
            int result = numbers[3] / 0;
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception occurred: " + e.getMessage());
            throw new Exception("An exception occurred.", e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out Of Bounds Exception occurred: " + e.getMessage());
            throw new Exception("An exception occurred.", e);
        } catch (Exception e) {
            System.out.println("Some other Exception occurred: " +
                    e.getMessage());
            throw e;
        } finally {
            System.out.println("This block always gets executed.");
        }
    }
}
