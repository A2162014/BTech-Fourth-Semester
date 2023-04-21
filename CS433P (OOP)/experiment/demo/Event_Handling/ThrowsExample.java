// THROWS KEYWORD:
// 1.
public class ThrowsExample {
    public static void main(String[] args) throws InterruptedException {
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println("InterruptedException occurred: " + e.getMessage());
        }
        System.out.println("Program completed.");
    }
}

// // 2.
// public class ThrowsExample {
//     public static void main(String[] args) throws Exception {
//         int result = divide(10, 0); // This will throw an ArithmeticException
//         System.out.println("Result: " + result);
//     }

//     public static int divide(int num1, int num2) throws ArithmeticException {
//         if (num2 == 0) {
//             throw new ArithmeticException("Division by zero.");
//         }
//         return num1 / num2;
//     }
// }