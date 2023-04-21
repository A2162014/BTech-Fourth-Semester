// Write a Java program that checks whether a given string is a palindrome or not
import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        String str, rev = "";
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string you want to check.");
        str = sc.nextLine();
        int n = str.length();
        for (int i = n - 1; i >= 0; i--)
            rev += str.charAt(i); // rev=str[i];
        if (str.equalsIgnoreCase(rev)) {
            System.out.println(str + " is a Palindrome String.");
        } else {
            System.out.println(str + " is not a Palindrome String.");
        }
    }
}