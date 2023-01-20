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

    //the data members
    int I;
    float F;
    String S;

    //function to display inputs form user
    public String display() {
        return ("Integer: " + I + " Float: " + F + " String: " + S);
    }

    public static void main(String[] args) {
        //create object for Scanner and Input
        Scanner scn = new Scanner(System.in);
        Input obj = new Input();

        //get inputs from user using object scn
        System.out.println("Enter integer:");
        obj.I = scn.nextInt();
        System.out.println("Enter float:");
        obj.F = scn.nextFloat();
        System.out.println("Enter string:");
        obj.S = scn.next();

        //call display function using object obj
        System.out.println(obj.display());
    }
}
