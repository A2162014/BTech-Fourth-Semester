/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author ashvath
 */
import java.util.*;

public class Input {
    public static void main(String[] args) {
//      create object for Scanner
        Scanner scn = new Scanner(System.in);
//      get inputs from user using object scn
        System.out.println("Enter value of integers:");
        int i = scn.nextInt();
        System.out.println("Enter value of float:");
        float f = scn.nextFloat();
        System.out.println("Enter value of string:");
        String s = scn.next();
//      display inputs of the user
        System.out.println("Entered integer: "+i);
        System.out.println("Entered float: "+f);
        System.out.println("Entered string: "+s);
    }
}
