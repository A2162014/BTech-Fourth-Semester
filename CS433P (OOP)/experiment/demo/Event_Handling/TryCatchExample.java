public class TryCatchExample {
    public static void main(String[] args) {
        int result = 5 / 0; // This will throw an ArithmeticException
        System.out.println("Result: " + result);
    }
}

// // TRY CATCH:
// public class TryCatchExample {
//     public static void main(String[] args) {
//         try {
//             int result = divide(10, 0); // This will throw an ArithmeticException
//             System.out.println("Result: " + result);
//         } catch (ArithmeticException e) {
//             System.out.println("Arithmetic Exception occurred:");
//         }
//     }
// }