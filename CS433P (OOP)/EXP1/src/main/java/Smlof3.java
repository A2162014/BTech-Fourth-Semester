/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author ashvath
 */
import java.util.*;
public class Smlof3 {
    //data members
    int a, b, c;
    
    //function to find the smallest number
    public int findsml(){
        return (c > (a>b?b:a) ? (a>b?b:a) : c);
    }
    
    
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        Smlof3 obj = new Smlof3();
        
        System.out.println("Enter 3 numbers: ");
        obj.a = scn.nextInt();
        obj.b = scn.nextInt();
        obj.c = scn.nextInt();
        
        int temp = obj.findsml();
        
        System.out.println("Smallest number: "+temp);        
    }    
}
