/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author ashvath
 */
import java.util.*;
public class ChkPrime {
    //function to check whether a number is Prime or not
    public int checkPrime(int num){
        int flag = 0, i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
            ++i;
        }
        return flag;
    }
    
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        ChkPrime obj = new ChkPrime();

        System.out.println("Enter number:");
        int num = scn.nextInt();

        int ans = obj.checkPrime(num);

        if (ans==1)
            System.out.println(num + " is a prime number.");
        else
            System.out.println(num + " is not a prime number.");
    }
}