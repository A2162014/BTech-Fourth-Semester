/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author ashvath
 */
import java.util.*;
public class Grtof3 {
    //data members
    int a, b, c;
    
    //funciton to find greatest number
    public int findgrt(){
        return (c > (a>b?a:b) ? c : (a>b?a:b));
    }
    
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        Grtof3 obj = new Grtof3();
        
        System.out.println("Enter 3 numbers: ");
        obj.a = scn.nextInt();
        obj.b = scn.nextInt();
        obj.c = scn.nextInt();
        
        //call findgrt function using object obj 
        int temp = obj.findgrt();
        
        System.out.println("Greatest number: "+temp);        
    }    
}
