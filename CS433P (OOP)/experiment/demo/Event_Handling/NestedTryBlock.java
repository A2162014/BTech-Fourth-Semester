// MULTIPLE TRY
public class NestedTryBlock {
    public static void main(String args[]) {
        try { // outer try block
            try { // inner try block 1
                System.out.println("going to divide by 0");
                int b = 39 / 0;
            } catch (ArithmeticException e) // catch block of inner try block 1
            {
                System.out.println(e);
            }
            try { // inner try block 2
                int a[] = new int[5];
                a[5] = 4;
            } catch (ArrayIndexOutOfBoundsException e) // catch block of inner try block 2
            {
                System.out.println(e);
            }
            System.out.println("other statement");
        }
        // catch block of outer try block
        catch (Exception e) {
            System.out.println("handled the exception (outer catch)");
        }
        System.out.println("normal flow..");
    }
}