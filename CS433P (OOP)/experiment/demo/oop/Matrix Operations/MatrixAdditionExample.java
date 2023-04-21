// Matrix Addition:
// WITHOUT SCANNER:
public class MatrixAdditionExample {
    public static void main(String args[]) {
        // creating two matrices
        int a[][] = { { 1, 3, 4 }, { 2, 4, 3 }, { 3, 4, 5 } };
        int b[][] = { { 1, 3, 4 }, { 2, 4, 3 }, { 1, 2, 4 } };
        // creating another matrix to store the sum of two matrices
        int c[][] = new int[3][3]; // 3 rows and 3 columns
        // adding and printing addition of 2 matrices
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                c[i][j] = a[i][j] + b[i][j]; // use - for subtraction
                System.out.print(c[i][j] + " ");
            }
            System.out.println();// new line
        }
    }
}

// // WITH SCANNER CLASS:
// import java.util.Scanner;

// public class MatrixAdditionExample {
//     public static void main(String args[]) {
//         // creating two matrices
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the number of rows: ");
//         int m = sc.nextInt();
//         System.out.println("Enter the number of columns: ");
//         int n = sc.nextInt();
//         int a[][] = new int[m][n];
//         int b[][] = new int[m][n];
//         int c[][] = new int[m][n];
//         System.out.println("Enter the array elements for matrix A: ");
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 a[i][j] = sc.nextInt();
//             }
//         }

//         System.out.println("Enter the array elements for matrix B: ");
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 b[i][j] = sc.nextInt();
//             }
//         }

//         System.out.println("Array elements of matrix A are: ");
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 System.out.print(a[i][j] + " ");
//             }
//             System.out.println();
//         }

//         System.out.println("Array elements of matrix B are: ");
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 System.out.print(b[i][j] + " ");
//             }
//             System.out.println();
//         }

//         System.out.println("Resultant matrix is: ");
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 c[i][j] = a[i][j] + b[i][j]; // use - for subtraction
//                 System.out.print(c[i][j] + " ");
//             }
//             System.out.println();
//         }
//     }
// }