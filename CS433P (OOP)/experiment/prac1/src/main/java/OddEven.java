/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author ashvath
 */
import java.util.*;

public class OddEven {

    public String ChkOddEven(int a) {
        return ((a % 2 == 0) ? "Even" : "Odd");
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        OddEven obj = new OddEven();

        System.out.println("Enter number: ");
        int a = scn.nextInt();

        String ans = obj.ChkOddEven(a);
        System.out.println(a + " is " + ans + " number");
    }
}
